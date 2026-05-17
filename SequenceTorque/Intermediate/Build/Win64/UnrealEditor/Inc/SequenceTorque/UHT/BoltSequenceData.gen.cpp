// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/BoltSequenceData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBoltSequenceData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_UBoltSequenceData();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_UBoltSequenceData_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequenceTorque();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBoltSequenceData ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBoltSequenceData;
UClass* UBoltSequenceData::GetPrivateStaticClass()
{
	using TClass = UBoltSequenceData;
	if (!Z_Registration_Info_UClass_UBoltSequenceData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BoltSequenceData"),
			Z_Registration_Info_UClass_UBoltSequenceData.InnerSingleton,
			StaticRegisterNativesUBoltSequenceData,
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
	return Z_Registration_Info_UClass_UBoltSequenceData.InnerSingleton;
}
UClass* Z_Construct_UClass_UBoltSequenceData_NoRegister()
{
	return UBoltSequenceData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBoltSequenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/BoltSequenceData.h" },
		{ "ModuleRelativePath", "Public/Data/BoltSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TighteningOrder_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Data/BoltSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Layout" },
		{ "ClampMin", "8.0" },
		{ "ModuleRelativePath", "Public/Data/BoltSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoltHeight_MetaData[] = {
		{ "Category", "Layout" },
		{ "ModuleRelativePath", "Public/Data/BoltSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAngleDegrees_MetaData[] = {
		{ "Category", "Layout" },
		{ "ModuleRelativePath", "Public/Data/BoltSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffsetPosition_MetaData[] = {
		{ "Category", "Layout" },
		{ "ModuleRelativePath", "Public/Data/BoltSequenceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoltCount_MetaData[] = {
		{ "Category", "Layout" },
		{ "ClampMax", "16" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/Data/BoltSequenceData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBoltSequenceData constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TighteningOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TighteningOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoltHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffsetPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoltCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBoltSequenceData constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoltSequenceData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBoltSequenceData_Statics

// ********** Begin Class UBoltSequenceData Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_TighteningOrder_Inner = { "TighteningOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_TighteningOrder = { "TighteningOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoltSequenceData, TighteningOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TighteningOrder_MetaData), NewProp_TighteningOrder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoltSequenceData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_BoltHeight = { "BoltHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoltSequenceData, BoltHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoltHeight_MetaData), NewProp_BoltHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_StartAngleDegrees = { "StartAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoltSequenceData, StartAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAngleDegrees_MetaData), NewProp_StartAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_ZOffsetPosition = { "ZOffsetPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoltSequenceData, ZOffsetPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffsetPosition_MetaData), NewProp_ZOffsetPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_BoltCount = { "BoltCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoltSequenceData, BoltCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoltCount_MetaData), NewProp_BoltCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoltSequenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_TighteningOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_TighteningOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_BoltHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_StartAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_ZOffsetPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltSequenceData_Statics::NewProp_BoltCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoltSequenceData_Statics::PropPointers) < 2048);
// ********** End Class UBoltSequenceData Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UBoltSequenceData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SequenceTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoltSequenceData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoltSequenceData_Statics::ClassParams = {
	&UBoltSequenceData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBoltSequenceData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoltSequenceData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoltSequenceData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoltSequenceData_Statics::Class_MetaDataParams)
};
void UBoltSequenceData::StaticRegisterNativesUBoltSequenceData()
{
}
UClass* Z_Construct_UClass_UBoltSequenceData()
{
	if (!Z_Registration_Info_UClass_UBoltSequenceData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoltSequenceData.OuterSingleton, Z_Construct_UClass_UBoltSequenceData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoltSequenceData.OuterSingleton;
}
UBoltSequenceData::UBoltSequenceData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBoltSequenceData);
UBoltSequenceData::~UBoltSequenceData() {}
// ********** End Class UBoltSequenceData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Data_BoltSequenceData_h__Script_SequenceTorque_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoltSequenceData, UBoltSequenceData::StaticClass, TEXT("UBoltSequenceData"), &Z_Registration_Info_UClass_UBoltSequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoltSequenceData), 972722562U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Data_BoltSequenceData_h__Script_SequenceTorque_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Data_BoltSequenceData_h__Script_SequenceTorque_2432090365{
	TEXT("/Script/SequenceTorque"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Data_BoltSequenceData_h__Script_SequenceTorque_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Data_BoltSequenceData_h__Script_SequenceTorque_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
