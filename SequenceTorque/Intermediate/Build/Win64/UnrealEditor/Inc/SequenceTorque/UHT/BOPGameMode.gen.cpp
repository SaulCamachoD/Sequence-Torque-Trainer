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
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOPGameMode();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequenceTorque();
// ********** End Cross Module References **********************************************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/BOPGameMode.h" },
		{ "ModuleRelativePath", "Private/Core/BOPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABOPGameMode constinit property declarations *****************************
// ********** End Class ABOPGameMode constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABOPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABOPGameMode_Statics
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABOPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABOPGameMode_Statics::Class_MetaDataParams)
};
void ABOPGameMode::StaticRegisterNativesABOPGameMode()
{
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
		{ Z_Construct_UClass_ABOPGameMode, ABOPGameMode::StaticClass, TEXT("ABOPGameMode"), &Z_Registration_Info_UClass_ABOPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABOPGameMode), 3628126606U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_3194904089{
	TEXT("/Script/SequenceTorque"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h__Script_SequenceTorque_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
