// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryProject/Public/InventorySlot.h"
#include "InventoryProject/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlot() {}

// Begin Cross Module References
INVENTORYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUInventorySlot();
INVENTORYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUItem();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin ScriptStruct FUInventorySlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UInventorySlot;
class UScriptStruct* FUInventorySlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UInventorySlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UInventorySlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUInventorySlot, (UObject*)Z_Construct_UPackage__Script_InventoryProject(), TEXT("UInventorySlot"));
	}
	return Z_Registration_Info_UScriptStruct_UInventorySlot.OuterSingleton;
}
template<> INVENTORYPROJECT_API UScriptStruct* StaticStruct<FUInventorySlot>()
{
	return FUInventorySlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUInventorySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Stores information about a single slot in the inventory\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores information about a single slot in the inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Inventory slot details" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Item held in this slot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item held in this slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUInventorySlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUInventorySlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUInventorySlot, Item), Z_Construct_UScriptStruct_FUItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2354291606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUInventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUInventorySlot_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUInventorySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUInventorySlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
	nullptr,
	&NewStructOps,
	"UInventorySlot",
	Z_Construct_UScriptStruct_FUInventorySlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUInventorySlot_Statics::PropPointers),
	sizeof(FUInventorySlot),
	alignof(FUInventorySlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUInventorySlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUInventorySlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUInventorySlot()
{
	if (!Z_Registration_Info_UScriptStruct_UInventorySlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UInventorySlot.InnerSingleton, Z_Construct_UScriptStruct_FUInventorySlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UInventorySlot.InnerSingleton;
}
// End ScriptStruct FUInventorySlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUInventorySlot::StaticStruct, Z_Construct_UScriptStruct_FUInventorySlot_Statics::NewStructOps, TEXT("UInventorySlot"), &Z_Registration_Info_UScriptStruct_UInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUInventorySlot), 1058102134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_914402339(TEXT("/Script/InventoryProject"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
