// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/InteractableInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractableInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_UInteractableInterface();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequenceTorque();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractableInterface Function Interact *****************************
struct InteractableInterface_eventInteract_Parms
{
	AActor* Object;
};
void IInteractableInterface::Interact(AActor* Object)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteractableInterface_Interact = FName(TEXT("Interact"));
void IInteractableInterface::Execute_Interact(UObject* O, AActor* Object)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
	InteractableInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_Interact);
	if (Func)
	{
		Parms.Object=std::move(Object);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
	{
		I->Interact_Implementation(Object);
	}
}
struct Z_Construct_UFunction_UInteractableInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractableInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Interact constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Interact constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Interact Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableInterface_eventInteract_Parms, Object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers) < 2048);
// ********** End Function Interact Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "Interact", 	Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers), 
sizeof(InteractableInterface_eventInteract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InteractableInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractableInterface::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Interface UInteractableInterface Function Interact *******************************

// ********** Begin Interface UInteractableInterface ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractableInterface;
UClass* UInteractableInterface::GetPrivateStaticClass()
{
	using TClass = UInteractableInterface;
	if (!Z_Registration_Info_UClass_UInteractableInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InteractableInterface"),
			Z_Registration_Info_UClass_UInteractableInterface.InnerSingleton,
			StaticRegisterNativesUInteractableInterface,
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
	return Z_Registration_Info_UClass_UInteractableInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractableInterface_NoRegister()
{
	return UInteractableInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractableInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UInteractableInterface constinit property declarations ***************
// ********** End Interface UInteractableInterface constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Interact"), .Pointer = &IInteractableInterface::execInteract },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableInterface_Interact, "Interact" }, // 1768572736
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInteractableInterface_Statics
UObject* (*const Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SequenceTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableInterface_Statics::ClassParams = {
	&UInteractableInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams)
};
void UInteractableInterface::StaticRegisterNativesUInteractableInterface()
{
	UClass* Class = UInteractableInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInteractableInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInteractableInterface()
{
	if (!Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton, Z_Construct_UClass_UInteractableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton;
}
UInteractableInterface::UInteractableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInteractableInterface);
// ********** End Interface UInteractableInterface *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h__Script_SequenceTorque_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableInterface, UInteractableInterface::StaticClass, TEXT("UInteractableInterface"), &Z_Registration_Info_UClass_UInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableInterface), 2687339701U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h__Script_SequenceTorque_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h__Script_SequenceTorque_313956245{
	TEXT("/Script/SequenceTorque"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h__Script_SequenceTorque_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h__Script_SequenceTorque_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
