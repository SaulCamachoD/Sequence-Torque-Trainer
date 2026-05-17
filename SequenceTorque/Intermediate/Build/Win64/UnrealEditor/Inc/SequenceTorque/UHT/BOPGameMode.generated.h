// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/BOPGameMode.h"

#ifdef SEQUENCETORQUE_BOPGameMode_generated_h
#error "BOPGameMode.generated.h already included, missing '#pragma once' in BOPGameMode.h"
#endif
#define SEQUENCETORQUE_BOPGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AABolt;

// ********** Begin Delegate FOnStepChanged ********************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_11_DELEGATE \
SEQUENCETORQUE_API void FOnStepChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStepChanged, int32 NewStep);


// ********** End Delegate FOnStepChanged **********************************************************

// ********** Begin Delegate FOnErrorsChanged ******************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_12_DELEGATE \
SEQUENCETORQUE_API void FOnErrorsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnErrorsChanged, int32 NewErrors);


// ********** End Delegate FOnErrorsChanged ********************************************************

// ********** Begin Delegate FOnGameCompleted ******************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_13_DELEGATE \
SEQUENCETORQUE_API void FOnGameCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnGameCompleted, float TotalTime, int32 TotalErrors);


// ********** End Delegate FOnGameCompleted ********************************************************

// ********** Begin Class ABOPGameMode *************************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSequenceCompleted); \
	DECLARE_FUNCTION(execHandleWrongBolt); \
	DECLARE_FUNCTION(execHandleStepAdvanced); \
	DECLARE_FUNCTION(execIsGameActive); \
	DECLARE_FUNCTION(execGetCurrentStep); \
	DECLARE_FUNCTION(execGetErrorCount); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execRestartSequence);


struct Z_Construct_UClass_ABOPGameMode_Statics;
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOPGameMode_NoRegister();

#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABOPGameMode(); \
	friend struct ::Z_Construct_UClass_ABOPGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCETORQUE_API UClass* ::Z_Construct_UClass_ABOPGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ABOPGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceTorque"), Z_Construct_UClass_ABOPGameMode_NoRegister) \
	DECLARE_SERIALIZER(ABOPGameMode)


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABOPGameMode(ABOPGameMode&&) = delete; \
	ABOPGameMode(const ABOPGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABOPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABOPGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABOPGameMode) \
	NO_API virtual ~ABOPGameMode();


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_16_PROLOG
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_19_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABOPGameMode;

// ********** End Class ABOPGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Private_Core_BOPGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
