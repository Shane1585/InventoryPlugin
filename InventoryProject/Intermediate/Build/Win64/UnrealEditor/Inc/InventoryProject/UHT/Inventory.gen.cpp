// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryProject/Inventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UInventory();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UInventory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin Class UInventory
void UInventory::StaticRegisterNativesUInventory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
UClass* Z_Construct_UClass_UInventory_NoRegister()
{
	return UInventory::StaticClass();
}
struct Z_Construct_UClass_UInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory.h" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
	&UInventory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventory()
{
	if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory.OuterSingleton;
}
template<> INVENTORYPROJECT_API UClass* StaticClass<UInventory>()
{
	return UInventory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
UInventory::~UInventory() {}
// End Class UInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Inventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 728358369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Inventory_h_2814692454(TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Inventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
