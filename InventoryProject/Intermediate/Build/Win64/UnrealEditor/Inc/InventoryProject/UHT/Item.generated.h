// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYPROJECT_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define INVENTORYPROJECT_Item_generated_h

#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execGetName);


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryProject"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItem(UItem&&); \
	UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	NO_API virtual ~UItem();


#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_12_PROLOG
#define FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYPROJECT_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
