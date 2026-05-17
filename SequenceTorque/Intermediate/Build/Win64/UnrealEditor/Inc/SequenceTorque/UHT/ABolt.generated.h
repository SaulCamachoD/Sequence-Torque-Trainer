// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/ABolt.h"

#ifdef SEQUENCETORQUE_ABolt_generated_h
#error "ABolt.generated.h already included, missing '#pragma once' in ABolt.h"
#endif
#define SEQUENCETORQUE_ABolt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AABolt;
enum class EBoltState : uint8;

// ********** Begin Delegate FOnBoltClicked ********************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_8_DELEGATE \
SEQUENCETORQUE_API void FOnBoltClicked_DelegateWrapper(const FMulticastScriptDelegate& OnBoltClicked, AABolt* ClickedBolt);


// ********** End Delegate FOnBoltClicked **********************************************************

// ********** Begin Delegate FOnBoltTightened ******************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_9_DELEGATE \
SEQUENCETORQUE_API void FOnBoltTightened_DelegateWrapper(const FMulticastScriptDelegate& OnBoltTightened);


// ********** End Delegate FOnBoltTightened ********************************************************

// ********** Begin Class AABolt *******************************************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetBolt); \
	DECLARE_FUNCTION(execSetHighlighted); \
	DECLARE_FUNCTION(execShowError); \
	DECLARE_FUNCTION(execTighten);


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AABolt_Statics;
SEQUENCETORQUE_API UClass* Z_Construct_UClass_AABolt_NoRegister();

#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABolt(); \
	friend struct ::Z_Construct_UClass_AABolt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCETORQUE_API UClass* ::Z_Construct_UClass_AABolt_NoRegister(); \
public: \
	DECLARE_CLASS2(AABolt, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceTorque"), Z_Construct_UClass_AABolt_NoRegister) \
	DECLARE_SERIALIZER(AABolt) \
	virtual UObject* _getUObject() const override { return const_cast<AABolt*>(this); }


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AABolt(AABolt&&) = delete; \
	AABolt(const AABolt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABolt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABolt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABolt) \
	NO_API virtual ~AABolt();


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_25_PROLOG
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_CALLBACK_WRAPPERS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AABolt;

// ********** End Class AABolt *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h

// ********** Begin Enum EBoltState ****************************************************************
#define FOREACH_ENUM_EBOLTSTATE(op) \
	op(EBoltState::Pending) \
	op(EBoltState::Active) \
	op(EBoltState::Tightened) \
	op(EBoltState::Error) 

enum class EBoltState : uint8;
template<> struct TIsUEnumClass<EBoltState> { enum { Value = true }; };
template<> SEQUENCETORQUE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoltState>();
// ********** End Enum EBoltState ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
