// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/BOPGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBOPGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_AABolt_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOP_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOPGameMode();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOPGameMode_NoRegister();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequenceTorque();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStepChanged ********************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics
{
	struct _Script_SequenceTorque_eventOnStepChanged_Parms
	{
		int32 NewStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStepChanged constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStepChanged constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStepChanged Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::NewProp_NewStep = { "NewStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SequenceTorque_eventOnStepChanged_Parms, NewStep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::NewProp_NewStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStepChanged Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnStepChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::_Script_SequenceTorque_eventOnStepChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::_Script_SequenceTorque_eventOnStepChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStepChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStepChanged, int32 NewStep)
{
	struct _Script_SequenceTorque_eventOnStepChanged_Parms
	{
		int32 NewStep;
	};
	_Script_SequenceTorque_eventOnStepChanged_Parms Parms;
	Parms.NewStep=NewStep;
	OnStepChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStepChanged **********************************************************

// ********** Begin Delegate FOnErrorsChanged ******************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics
{
	struct _Script_SequenceTorque_eventOnErrorsChanged_Parms
	{
		int32 NewErrors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnErrorsChanged constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewErrors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnErrorsChanged constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnErrorsChanged Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::NewProp_NewErrors = { "NewErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SequenceTorque_eventOnErrorsChanged_Parms, NewErrors), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::NewProp_NewErrors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnErrorsChanged Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnErrorsChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::_Script_SequenceTorque_eventOnErrorsChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::_Script_SequenceTorque_eventOnErrorsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnErrorsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnErrorsChanged, int32 NewErrors)
{
	struct _Script_SequenceTorque_eventOnErrorsChanged_Parms
	{
		int32 NewErrors;
	};
	_Script_SequenceTorque_eventOnErrorsChanged_Parms Parms;
	Parms.NewErrors=NewErrors;
	OnErrorsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnErrorsChanged ********************************************************

// ********** Begin Delegate FOnGameCompleted ******************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics
{
	struct _Script_SequenceTorque_eventOnGameCompleted_Parms
	{
		float TotalTime;
		int32 TotalErrors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameCompleted constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalErrors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameCompleted constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameCompleted Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SequenceTorque_eventOnGameCompleted_Parms, TotalTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::NewProp_TotalErrors = { "TotalErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SequenceTorque_eventOnGameCompleted_Parms, TotalErrors), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::NewProp_TotalTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::NewProp_TotalErrors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameCompleted Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnGameCompleted__DelegateSignature", 	Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::_Script_SequenceTorque_eventOnGameCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::_Script_SequenceTorque_eventOnGameCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnGameCompleted, float TotalTime, int32 TotalErrors)
{
	struct _Script_SequenceTorque_eventOnGameCompleted_Parms
	{
		float TotalTime;
		int32 TotalErrors;
	};
	_Script_SequenceTorque_eventOnGameCompleted_Parms Parms;
	Parms.TotalTime=TotalTime;
	Parms.TotalErrors=TotalErrors;
	OnGameCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameCompleted ********************************************************

// ********** Begin Class ABOPGameMode Function GetCurrentStep *************************************
struct Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics
{
	struct BOPGameMode_eventGetCurrentStep_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP|Game" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStep constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStep constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStep Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOPGameMode_eventGetCurrentStep_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStep Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "GetCurrentStep", 	Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::BOPGameMode_eventGetCurrentStep_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::BOPGameMode_eventGetCurrentStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOPGameMode_GetCurrentStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_GetCurrentStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execGetCurrentStep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStep();
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function GetCurrentStep ***************************************

// ********** Begin Class ABOPGameMode Function GetElapsedTime *************************************
struct Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics
{
	struct BOPGameMode_eventGetElapsedTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP|Game" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetElapsedTime constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetElapsedTime constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetElapsedTime Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOPGameMode_eventGetElapsedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::PropPointers) < 2048);
// ********** End Function GetElapsedTime Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "GetElapsedTime", 	Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::BOPGameMode_eventGetElapsedTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::BOPGameMode_eventGetElapsedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOPGameMode_GetElapsedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_GetElapsedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execGetElapsedTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetElapsedTime();
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function GetElapsedTime ***************************************

// ********** Begin Class ABOPGameMode Function GetErrorCount **************************************
struct Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics
{
	struct BOPGameMode_eventGetErrorCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP|Game" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetErrorCount constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetErrorCount constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetErrorCount Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOPGameMode_eventGetErrorCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::PropPointers) < 2048);
// ********** End Function GetErrorCount Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "GetErrorCount", 	Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::BOPGameMode_eventGetErrorCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::BOPGameMode_eventGetErrorCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOPGameMode_GetErrorCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_GetErrorCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execGetErrorCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetErrorCount();
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function GetErrorCount ****************************************

// ********** Begin Class ABOPGameMode Function HandleSequenceCompleted ****************************
struct Z_Construct_UFunction_ABOPGameMode_HandleSequenceCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSequenceCompleted constinit property declarations ***************
// ********** End Function HandleSequenceCompleted constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_HandleSequenceCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "HandleSequenceCompleted", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_HandleSequenceCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_HandleSequenceCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABOPGameMode_HandleSequenceCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_HandleSequenceCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execHandleSequenceCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSequenceCompleted();
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function HandleSequenceCompleted ******************************

// ********** Begin Class ABOPGameMode Function HandleStepAdvanced *********************************
struct Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics
{
	struct BOPGameMode_eventHandleStepAdvanced_Parms
	{
		int32 NewStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleStepAdvanced constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleStepAdvanced constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleStepAdvanced Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::NewProp_NewStep = { "NewStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOPGameMode_eventHandleStepAdvanced_Parms, NewStep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::NewProp_NewStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::PropPointers) < 2048);
// ********** End Function HandleStepAdvanced Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "HandleStepAdvanced", 	Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::BOPGameMode_eventHandleStepAdvanced_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::BOPGameMode_eventHandleStepAdvanced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execHandleStepAdvanced)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStepAdvanced(Z_Param_NewStep);
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function HandleStepAdvanced ***********************************

// ********** Begin Class ABOPGameMode Function HandleWrongBolt ************************************
struct Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics
{
	struct BOPGameMode_eventHandleWrongBolt_Parms
	{
		AABolt* WrongBolt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleWrongBolt constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WrongBolt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleWrongBolt constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleWrongBolt Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::NewProp_WrongBolt = { "WrongBolt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOPGameMode_eventHandleWrongBolt_Parms, WrongBolt), Z_Construct_UClass_AABolt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::NewProp_WrongBolt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::PropPointers) < 2048);
// ********** End Function HandleWrongBolt Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "HandleWrongBolt", 	Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::BOPGameMode_eventHandleWrongBolt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::BOPGameMode_eventHandleWrongBolt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execHandleWrongBolt)
{
	P_GET_OBJECT(AABolt,Z_Param_WrongBolt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWrongBolt(Z_Param_WrongBolt);
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function HandleWrongBolt **************************************

// ********** Begin Class ABOPGameMode Function IsGameActive ***************************************
struct Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics
{
	struct BOPGameMode_eventIsGameActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP|Game" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsGameActive constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGameActive constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGameActive Property Definitions *************************************
void Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BOPGameMode_eventIsGameActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BOPGameMode_eventIsGameActive_Parms), &Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::PropPointers) < 2048);
// ********** End Function IsGameActive Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "IsGameActive", 	Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::BOPGameMode_eventIsGameActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::BOPGameMode_eventIsGameActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOPGameMode_IsGameActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_IsGameActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execIsGameActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGameActive();
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function IsGameActive *****************************************

// ********** Begin Class ABOPGameMode Function RestartSequence ************************************
struct Z_Construct_UFunction_ABOPGameMode_RestartSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP|Game" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RestartSequence constinit property declarations ***********************
// ********** End Function RestartSequence constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOPGameMode_RestartSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOPGameMode, nullptr, "RestartSequence", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOPGameMode_RestartSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOPGameMode_RestartSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABOPGameMode_RestartSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOPGameMode_RestartSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOPGameMode::execRestartSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartSequence();
	P_NATIVE_END;
}
// ********** End Class ABOPGameMode Function RestartSequence **************************************

// ********** Begin Class ABOPGameMode *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABOPGameMode;
UClass* ABOPGameMode::GetPrivateStaticClass()
{
	using TClass = ABOPGameMode;
	if (!Z_Registration_Info_UClass_ABOPGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BOPGameMode"),
			Z_Registration_Info_UClass_ABOPGameMode.InnerSingleton,
			StaticRegisterNativesABOPGameMode,
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
	return Z_Registration_Info_UClass_ABOPGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABOPGameMode_NoRegister()
{
	return ABOPGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABOPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/BOPGameMode.h" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "BOP|UI" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VictoryWidgetClass_MetaData[] = {
		{ "Category", "BOP|UI" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStepChanged_MetaData[] = {
		{ "Category", "BOP|Events" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnErrorsChanged_MetaData[] = {
		{ "Category", "BOP|Events" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameCompleted_MetaData[] = {
		{ "Category", "BOP|Events" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBOP_MetaData[] = {
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VictoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABOPGameMode constinit property declarations *****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VictoryWidgetClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStepChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnErrorsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentBOP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VictoryWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABOPGameMode constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentStep"), .Pointer = &ABOPGameMode::execGetCurrentStep },
		{ .NameUTF8 = UTF8TEXT("GetElapsedTime"), .Pointer = &ABOPGameMode::execGetElapsedTime },
		{ .NameUTF8 = UTF8TEXT("GetErrorCount"), .Pointer = &ABOPGameMode::execGetErrorCount },
		{ .NameUTF8 = UTF8TEXT("HandleSequenceCompleted"), .Pointer = &ABOPGameMode::execHandleSequenceCompleted },
		{ .NameUTF8 = UTF8TEXT("HandleStepAdvanced"), .Pointer = &ABOPGameMode::execHandleStepAdvanced },
		{ .NameUTF8 = UTF8TEXT("HandleWrongBolt"), .Pointer = &ABOPGameMode::execHandleWrongBolt },
		{ .NameUTF8 = UTF8TEXT("IsGameActive"), .Pointer = &ABOPGameMode::execIsGameActive },
		{ .NameUTF8 = UTF8TEXT("RestartSequence"), .Pointer = &ABOPGameMode::execRestartSequence },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABOPGameMode_GetCurrentStep, "GetCurrentStep" }, // 3564929431
		{ &Z_Construct_UFunction_ABOPGameMode_GetElapsedTime, "GetElapsedTime" }, // 822767448
		{ &Z_Construct_UFunction_ABOPGameMode_GetErrorCount, "GetErrorCount" }, // 2730720643
		{ &Z_Construct_UFunction_ABOPGameMode_HandleSequenceCompleted, "HandleSequenceCompleted" }, // 2355958973
		{ &Z_Construct_UFunction_ABOPGameMode_HandleStepAdvanced, "HandleStepAdvanced" }, // 171927010
		{ &Z_Construct_UFunction_ABOPGameMode_HandleWrongBolt, "HandleWrongBolt" }, // 1843691358
		{ &Z_Construct_UFunction_ABOPGameMode_IsGameActive, "IsGameActive" }, // 1296235790
		{ &Z_Construct_UFunction_ABOPGameMode_RestartSequence, "RestartSequence" }, // 2323521386
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABOPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABOPGameMode_Statics

// ********** Begin Class ABOPGameMode Property Definitions ****************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, HUDWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_VictoryWidgetClass = { "VictoryWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, VictoryWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VictoryWidgetClass_MetaData), NewProp_VictoryWidgetClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_OnStepChanged = { "OnStepChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, OnStepChanged), Z_Construct_UDelegateFunction_SequenceTorque_OnStepChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStepChanged_MetaData), NewProp_OnStepChanged_MetaData) }; // 1647481174
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_OnErrorsChanged = { "OnErrorsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, OnErrorsChanged), Z_Construct_UDelegateFunction_SequenceTorque_OnErrorsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnErrorsChanged_MetaData), NewProp_OnErrorsChanged_MetaData) }; // 3542809170
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_OnGameCompleted = { "OnGameCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, OnGameCompleted), Z_Construct_UDelegateFunction_SequenceTorque_OnGameCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameCompleted_MetaData), NewProp_OnGameCompleted_MetaData) }; // 3530657524
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_CurrentBOP = { "CurrentBOP", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, CurrentBOP), Z_Construct_UClass_ABOP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBOP_MetaData), NewProp_CurrentBOP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, HUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOPGameMode_Statics::NewProp_VictoryWidget = { "VictoryWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPGameMode, VictoryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VictoryWidget_MetaData), NewProp_VictoryWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABOPGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_VictoryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_OnStepChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_OnErrorsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_OnGameCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_CurrentBOP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_HUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPGameMode_Statics::NewProp_VictoryWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABOPGameMode_Statics::PropPointers) < 2048);
// ********** End Class ABOPGameMode Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_ABOPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SequenceTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABOPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABOPGameMode_Statics::ClassParams = {
	&ABOPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABOPGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABOPGameMode_Statics::PropPointers),
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABOPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABOPGameMode_Statics::Class_MetaDataParams)
};
void ABOPGameMode::StaticRegisterNativesABOPGameMode()
{
	UClass* Class = ABOPGameMode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ABOPGameMode_Statics::Funcs));
}
UClass* Z_Construct_UClass_ABOPGameMode()
{
	if (!Z_Registration_Info_UClass_ABOPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABOPGameMode.OuterSingleton, Z_Construct_UClass_ABOPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABOPGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABOPGameMode);
ABOPGameMode::~ABOPGameMode() {}
// ********** End Class ABOPGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABOPGameMode, ABOPGameMode::StaticClass, TEXT("ABOPGameMode"), &Z_Registration_Info_UClass_ABOPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABOPGameMode), 3344185250U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_4023034759{
	TEXT("/Script/SequenceTorque"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
