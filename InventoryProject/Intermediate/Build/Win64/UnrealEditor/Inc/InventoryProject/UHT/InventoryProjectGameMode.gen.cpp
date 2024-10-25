// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryProject/InventoryProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AInventoryProjectGameMode();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AInventoryProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin Class AInventoryProjectGameMode
void AInventoryProjectGameMode::StaticRegisterNativesAInventoryProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryProjectGameMode);
UClass* Z_Construct_UClass_AInventoryProjectGameMode_NoRegister()
{
	return AInventoryProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AInventoryProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InventoryProjectGameMode.h" },
		{ "ModuleRelativePath", "InventoryProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInventoryProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryProjectGameMode_Statics::ClassParams = {
	&AInventoryProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventoryProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInventoryProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AInventoryProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryProjectGameMode.OuterSingleton, Z_Construct_UClass_AInventoryProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventoryProjectGameMode.OuterSingleton;
}
template<> INVENTORYPROJECT_API UClass* StaticClass<AInventoryProjectGameMode>()
{
	return AInventoryProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryProjectGameMode);
AInventoryProjectGameMode::~AInventoryProjectGameMode() {}
// End Class AInventoryProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryProjectGameMode, AInventoryProjectGameMode::StaticClass, TEXT("AInventoryProjectGameMode"), &Z_Registration_Info_UClass_AInventoryProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryProjectGameMode), 157579186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectGameMode_h_2372470928(TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
