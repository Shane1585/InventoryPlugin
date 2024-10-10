// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySlotUIWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventorySlot;
#ifdef INVENTORYPROJECT_InventorySlotUIWrapper_generated_h
#error "InventorySlotUIWrapper.generated.h already included, missing '#pragma once' in InventorySlotUIWrapper.h"
#endif
#define INVENTORYPROJECT_InventorySlotUIWrapper_generated_h

#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execInit);


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySlotUIWrapper(); \
	friend struct Z_Construct_UClass_UInventorySlotUIWrapper_Statics; \
public: \
	DECLARE_CLASS(UInventorySlotUIWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryProject"), NO_API) \
	DECLARE_SERIALIZER(UInventorySlotUIWrapper)


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySlotUIWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventorySlotUIWrapper(UInventorySlotUIWrapper&&); \
	UInventorySlotUIWrapper(const UInventorySlotUIWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySlotUIWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySlotUIWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySlotUIWrapper) \
	NO_API virtual ~UInventorySlotUIWrapper();


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_14_PROLOG
#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYPROJECT_API UClass* StaticClass<class UInventorySlotUIWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
