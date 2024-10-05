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
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UItem();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin Class UItem Function GetName
struct Z_Construct_UFunction_UItem_GetName_Statics
{
	struct Item_eventGetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Detail" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @return Display name of the item\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return Display name of the item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItem_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UItem_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_GetName_Statics::Item_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItem_GetName_Statics::Item_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItem_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class UItem Function GetName

// Begin Class UItem Function SetName
struct Z_Construct_UFunction_UItem_SetName_Statics
{
	struct Item_eventSetName_Parms
	{
		FString NewName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Detail" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @param NewName The name you want to set as the display name\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param NewName The name you want to set as the display name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItem_SetName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventSetName_Parms, NewName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_SetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_SetName_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "SetName", nullptr, nullptr, Z_Construct_UFunction_UItem_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_SetName_Statics::Item_eventSetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_SetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItem_SetName_Statics::Item_eventSetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItem_SetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_SetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execSetName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetName(Z_Param_NewName);
	P_NATIVE_END;
}
// End Class UItem Function SetName

// Begin Class UItem
void UItem::StaticRegisterNativesUItem()
{
	UClass* Class = UItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetName", &UItem::execGetName },
		{ "SetName", &UItem::execSetName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
UClass* Z_Construct_UClass_UItem_NoRegister()
{
	return UItem::StaticClass();
}
struct Z_Construct_UClass_UItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class stores the name and other important details about a single item.\n */" },
#endif
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class stores the name and other important details about a single item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Item Detail" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Display name for item\n\x09 */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display name for item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItem_GetName, "GetName" }, // 791794049
		{ &Z_Construct_UFunction_UItem_SetName, "SetName" }, // 1760844234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
	&UItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItem()
{
	if (!Z_Registration_Info_UClass_UItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItem.OuterSingleton, Z_Construct_UClass_UItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItem.OuterSingleton;
}
template<> INVENTORYPROJECT_API UClass* StaticClass<UItem>()
{
	return UItem::StaticClass();
}
UItem::UItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
UItem::~UItem() {}
// End Class UItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 1947344817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_1122806623(TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
