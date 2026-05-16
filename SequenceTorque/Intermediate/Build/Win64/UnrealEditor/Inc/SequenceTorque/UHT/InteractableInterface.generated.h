// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InteractableInterface.h"

#ifdef SEQUENCETORQUE_InteractableInterface_generated_h
#error "InteractableInterface.generated.h already included, missing '#pragma once' in InteractableInterface.h"
#endif
#define SEQUENCETORQUE_InteractableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Interface UInteractableInterface ***********************************************
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* Object) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInteractableInterface_Statics;
SEQUENCETORQUE_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();

#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCETORQUE_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractableInterface(UInteractableInterface&&) = delete; \
	UInteractableInterface(const UInteractableInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCETORQUE_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	virtual ~UInteractableInterface() = default;


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInterface(); \
	friend struct ::Z_Construct_UClass_UInteractableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCETORQUE_API UClass* ::Z_Construct_UClass_UInteractableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SequenceTorque"), Z_Construct_UClass_UInteractableInterface_NoRegister) \
	DECLARE_SERIALIZER(UInteractableInterface)


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static void Execute_Interact(UObject* O, AActor* Object); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_7_PROLOG
#define FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_CALLBACK_WRAPPERS \
	FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractableInterface;

// ********** End Interface UInteractableInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Interfaces_InteractableInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
