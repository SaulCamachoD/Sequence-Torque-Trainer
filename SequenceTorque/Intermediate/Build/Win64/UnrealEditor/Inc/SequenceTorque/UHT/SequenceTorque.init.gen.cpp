// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceTorque_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature();
	SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature();
	SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature();
	SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature();
	SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SequenceTorque;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SequenceTorque()
	{
		if (!Z_Registration_Info_UPackage__Script_SequenceTorque.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SequenceTorque",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x58AD456D,
			0x273A0906,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SequenceTorque.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SequenceTorque.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SequenceTorque(Z_Construct_UPackage__Script_SequenceTorque, TEXT("/Script/SequenceTorque"), Z_Registration_Info_UPackage__Script_SequenceTorque, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x58AD456D, 0x273A0906));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
