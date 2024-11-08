// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryProject/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
INVENTORYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin ScriptStruct FItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Item;
class UScriptStruct* FItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Item.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Item.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem, (UObject*)Z_Construct_UPackage__Script_InventoryProject(), TEXT("Item"));
	}
	return Z_Registration_Info_UScriptStruct_Item.OuterSingleton;
}
template<> INVENTORYPROJECT_API UScriptStruct* StaticStruct<FItem>()
{
	return FItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class stores the name and other important details about a single item.\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class stores the name and other important details about a single item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Item Detail" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Display name for item\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display name for item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Item Detail" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Item Detail" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
	nullptr,
	&NewStructOps,
	"Item",
	Z_Construct_UScriptStruct_FItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers),
	sizeof(FItem),
	alignof(FItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItem()
{
	if (!Z_Registration_Info_UScriptStruct_Item.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Item.InnerSingleton, Z_Construct_UScriptStruct_FItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Item.InnerSingleton;
}
// End ScriptStruct FItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_D3524091_Documents_GitHub_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItem::StaticStruct, Z_Construct_UScriptStruct_FItem_Statics::NewStructOps, TEXT("Item"), &Z_Registration_Info_UScriptStruct_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItem), 4120207005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_D3524091_Documents_GitHub_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_1337064573(TEXT("/Script/InventoryProject"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_D3524091_Documents_GitHub_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3524091_Documents_GitHub_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
