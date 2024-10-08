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
INVENTORYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUItem();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin ScriptStruct FUItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UItem;
class UScriptStruct* FUItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUItem, (UObject*)Z_Construct_UPackage__Script_InventoryProject(), TEXT("UItem"));
	}
	return Z_Registration_Info_UScriptStruct_UItem.OuterSingleton;
}
template<> INVENTORYPROJECT_API UScriptStruct* StaticStruct<FUItem>()
{
	return FUItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUItem_Statics
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUItem_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
	nullptr,
	&NewStructOps,
	"UItem",
	Z_Construct_UScriptStruct_FUItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUItem_Statics::PropPointers),
	sizeof(FUItem),
	alignof(FUItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUItem()
{
	if (!Z_Registration_Info_UScriptStruct_UItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UItem.InnerSingleton, Z_Construct_UScriptStruct_FUItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UItem.InnerSingleton;
}
// End ScriptStruct FUItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUItem::StaticStruct, Z_Construct_UScriptStruct_FUItem_Statics::NewStructOps, TEXT("UItem"), &Z_Registration_Info_UScriptStruct_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUItem), 2354291606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_4168403353(TEXT("/Script/InventoryProject"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
