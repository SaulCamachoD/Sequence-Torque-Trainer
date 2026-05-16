// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/BOPPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBOPPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOPPlayerController();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOPPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequenceTorque();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABOPPlayerController *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABOPPlayerController;
UClass* ABOPPlayerController::GetPrivateStaticClass()
{
	using TClass = ABOPPlayerController;
	if (!Z_Registration_Info_UClass_ABOPPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BOPPlayerController"),
			Z_Registration_Info_UClass_ABOPPlayerController.InnerSingleton,
			StaticRegisterNativesABOPPlayerController,
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
	return Z_Registration_Info_UClass_ABOPPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABOPPlayerController_NoRegister()
{
	return ABOPPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABOPPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/BOPPlayerController.h" },
		{ "ModuleRelativePath", "Public/Core/BOPPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/BOPPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/BOPPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTraceChannel_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/BOPPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHoveredActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/BOPPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABOPPlayerController constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionTraceChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHoveredActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABOPPlayerController constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABOPPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABOPPlayerController_Statics

// ********** Begin Class ABOPPlayerController Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPPlayerController, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickAction_MetaData), NewProp_ClickAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_InteractionTraceChannel = { "InteractionTraceChannel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPPlayerController, InteractionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTraceChannel_MetaData), NewProp_InteractionTraceChannel_MetaData) }; // 838391399
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_CurrentHoveredActor = { "CurrentHoveredActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOPPlayerController, CurrentHoveredActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHoveredActor_MetaData), NewProp_CurrentHoveredActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABOPPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_ClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_InteractionTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOPPlayerController_Statics::NewProp_CurrentHoveredActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABOPPlayerController_Statics::PropPointers) < 2048);
// ********** End Class ABOPPlayerController Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ABOPPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SequenceTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABOPPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABOPPlayerController_Statics::ClassParams = {
	&ABOPPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABOPPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABOPPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABOPPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABOPPlayerController_Statics::Class_MetaDataParams)
};
void ABOPPlayerController::StaticRegisterNativesABOPPlayerController()
{
}
UClass* Z_Construct_UClass_ABOPPlayerController()
{
	if (!Z_Registration_Info_UClass_ABOPPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABOPPlayerController.OuterSingleton, Z_Construct_UClass_ABOPPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABOPPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABOPPlayerController);
ABOPPlayerController::~ABOPPlayerController() {}
// ********** End Class ABOPPlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Core_BOPPlayerController_h__Script_SequenceTorque_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABOPPlayerController, ABOPPlayerController::StaticClass, TEXT("ABOPPlayerController"), &Z_Registration_Info_UClass_ABOPPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABOPPlayerController), 2946372324U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Core_BOPPlayerController_h__Script_SequenceTorque_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Core_BOPPlayerController_h__Script_SequenceTorque_1144200383{
	TEXT("/Script/SequenceTorque"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Core_BOPPlayerController_h__Script_SequenceTorque_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Core_BOPPlayerController_h__Script_SequenceTorque_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
