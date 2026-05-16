// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/BOP.h"

#ifdef SEQUENCETORQUE_BOP_generated_h
#error "BOP.generated.h already included, missing '#pragma once' in BOP.h"
#endif
#define SEQUENCETORQUE_BOP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AABolt;

// ********** Begin Delegate FOnSequenceCompleted **************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_9_DELEGATE \
SEQUENCETORQUE_API void FOnSequenceCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnSequenceCompleted);


// ********** End Delegate FOnSequenceCompleted ****************************************************

// ********** Begin Delegate FOnWrongBoltClicked ***************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_10_DELEGATE \
SEQUENCETORQUE_API void FOnWrongBoltClicked_DelegateWrapper(const FMulticastScriptDelegate& OnWrongBoltClicked, AABolt* WrongBolt);


// ********** End Delegate FOnWrongBoltClicked *****************************************************

// ********** Begin Delegate FOnStepAdvanced *******************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_11_DELEGATE \
SEQUENCETORQUE_API void FOnStepAdvanced_DelegateWrapper(const FMulticastScriptDelegate& OnStepAdvanced, int32 NewStep);


// ********** End Delegate FOnStepAdvanced *********************************************************

// ********** Begin Class ABOP *********************************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleBoltClicked); \
	DECLARE_FUNCTION(execIsSequenceCompleted); \
	DECLARE_FUNCTION(execGetCurrentExpectedBolt); \
	DECLARE_FUNCTION(execGetCurrentStep); \
	DECLARE_FUNCTION(execResetSequence);


struct Z_Construct_UClass_ABOP_Statics;
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOP_NoRegister();

#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABOP(); \
	friend struct ::Z_Construct_UClass_ABOP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCETORQUE_API UClass* ::Z_Construct_UClass_ABOP_NoRegister(); \
public: \
	DECLARE_CLASS2(ABOP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceTorque"), Z_Construct_UClass_ABOP_NoRegister) \
	DECLARE_SERIALIZER(ABOP)


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABOP(ABOP&&) = delete; \
	ABOP(const ABOP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABOP) \
	NO_API virtual ~ABOP();


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_13_PROLOG
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABOP;

// ********** End Class ABOP ***********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
