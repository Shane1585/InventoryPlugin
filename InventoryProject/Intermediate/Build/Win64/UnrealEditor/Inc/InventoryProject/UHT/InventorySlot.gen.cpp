// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryProject/Public/InventorySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlot() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UInventorySlot();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin Class UInventorySlot Function GetItem
struct Z_Construct_UFunction_UInventorySlot_GetItem_Statics
{
	struct InventorySlot_eventGetItem_Parms
	{
		UItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory slot details" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @return The item held in this slot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return The item held in this slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventorySlot_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlot_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlot_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlot_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlot_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlot, nullptr, "GetItem", nullptr, nullptr, Z_Construct_UFunction_UInventorySlot_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventorySlot_GetItem_Statics::InventorySlot_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlot_GetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventorySlot_GetItem_Statics::InventorySlot_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlot_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlot_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventorySlot::execGetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItem**)Z_Param__Result=P_THIS->GetItem();
	P_NATIVE_END;
}
// End Class UInventorySlot Function GetItem

// Begin Class UInventorySlot Function GetName
struct Z_Construct_UFunction_UInventorySlot_GetName_Statics
{
	struct InventorySlot_eventGetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory slot details" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @return The name of the item in this slot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return The name of the item in this slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventorySlot_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlot_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlot_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlot_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlot_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlot, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UInventorySlot_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventorySlot_GetName_Statics::InventorySlot_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlot_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventorySlot_GetName_Statics::InventorySlot_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlot_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlot_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventorySlot::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class UInventorySlot Function GetName

// Begin Class UInventorySlot Function SetItem
struct Z_Construct_UFunction_UInventorySlot_SetItem_Statics
{
	struct InventorySlot_eventSetItem_Parms
	{
		UItem* NewItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory slot details" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @param NewItem The item to store in this slot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param NewItem The item to store in this slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventorySlot_SetItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlot_eventSetItem_Parms, NewItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlot_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlot_SetItem_Statics::NewProp_NewItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlot_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlot, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UInventorySlot_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_SetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventorySlot_SetItem_Statics::InventorySlot_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlot_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventorySlot_SetItem_Statics::InventorySlot_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlot_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlot_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventorySlot::execSetItem)
{
	P_GET_OBJECT(UItem,Z_Param_NewItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem(Z_Param_NewItem);
	P_NATIVE_END;
}
// End Class UInventorySlot Function SetItem

// Begin Class UInventorySlot
void UInventorySlot::StaticRegisterNativesUInventorySlot()
{
	UClass* Class = UInventorySlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItem", &UInventorySlot::execGetItem },
		{ "GetName", &UInventorySlot::execGetName },
		{ "SetItem", &UInventorySlot::execSetItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventorySlot);
UClass* Z_Construct_UClass_UInventorySlot_NoRegister()
{
	return UInventorySlot::StaticClass();
}
struct Z_Construct_UClass_UInventorySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Stores information about a single slot in the inventory\n */" },
#endif
		{ "IncludePath", "InventorySlot.h" },
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores information about a single slot in the inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Inventory slot details" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Item held in this slot\n\x09 */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item held in this slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventorySlot_GetItem, "GetItem" }, // 91159397
		{ &Z_Construct_UFunction_UInventorySlot_GetName, "GetName" }, // 1707768172
		{ &Z_Construct_UFunction_UInventorySlot_SetItem, "SetItem" }, // 2470251912
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventorySlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlot_Statics::ClassParams = {
	&UInventorySlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventorySlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySlot()
{
	if (!Z_Registration_Info_UClass_UInventorySlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlot.OuterSingleton, Z_Construct_UClass_UInventorySlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySlot.OuterSingleton;
}
template<> INVENTORYPROJECT_API UClass* StaticClass<UInventorySlot>()
{
	return UInventorySlot::StaticClass();
}
UInventorySlot::UInventorySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlot);
UInventorySlot::~UInventorySlot() {}
// End Class UInventorySlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlot, UInventorySlot::StaticClass, TEXT("UInventorySlot"), &Z_Registration_Info_UClass_UInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlot), 3179865327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_4119369479(TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
