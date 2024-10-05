// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
#ifdef INVENTORYPROJECT_InventorySlot_generated_h
#error "InventorySlot.generated.h already included, missing '#pragma once' in InventorySlot.h"
#endif
#define INVENTORYPROJECT_InventorySlot_generated_h

#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execSetItem); \
	DECLARE_FUNCTION(execGetItem);


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySlot(); \
	friend struct Z_Construct_UClass_UInventorySlot_Statics; \
public: \
	DECLARE_CLASS(UInventorySlot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryProject"), NO_API) \
	DECLARE_SERIALIZER(UInventorySlot)


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventorySlot(UInventorySlot&&); \
	UInventorySlot(const UInventorySlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySlot) \
	NO_API virtual ~UInventorySlot();


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_12_PROLOG
#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYPROJECT_API UClass* StaticClass<class UInventorySlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
