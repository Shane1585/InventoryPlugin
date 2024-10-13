// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryProject/Public/InventorySlotUIWrapper.h"
#include "InventoryProject/Public/InventorySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlotUIWrapper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UInventorySlotUIWrapper();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UInventorySlotUIWrapper_NoRegister();
INVENTORYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// End Cross Module References

// Begin Class UInventorySlotUIWrapper Function GetName
struct Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics
{
	struct InventorySlotUIWrapper_eventGetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory slot details" },
		{ "ModuleRelativePath", "Public/InventorySlotUIWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlotUIWrapper_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlotUIWrapper, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::InventorySlotUIWrapper_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::InventorySlotUIWrapper_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlotUIWrapper_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlotUIWrapper_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventorySlotUIWrapper::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class UInventorySlotUIWrapper Function GetName

// Begin Class UInventorySlotUIWrapper Function GetWeight
struct Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics
{
	struct InventorySlotUIWrapper_eventGetWeight_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory slot details" },
		{ "ModuleRelativePath", "Public/InventorySlotUIWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlotUIWrapper_eventGetWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlotUIWrapper, nullptr, "GetWeight", nullptr, nullptr, Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::InventorySlotUIWrapper_eventGetWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::InventorySlotUIWrapper_eventGetWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventorySlotUIWrapper::execGetWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetWeight();
	P_NATIVE_END;
}
// End Class UInventorySlotUIWrapper Function GetWeight

// Begin Class UInventorySlotUIWrapper Function Init
struct Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics
{
	struct InventorySlotUIWrapper_eventInit_Parms
	{
		FInventorySlot SlotData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory slot details" },
		{ "ModuleRelativePath", "Public/InventorySlotUIWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlotUIWrapper_eventInit_Parms, SlotData), Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(0, nullptr) }; // 115307985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::NewProp_SlotData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlotUIWrapper, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::InventorySlotUIWrapper_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::InventorySlotUIWrapper_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlotUIWrapper_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlotUIWrapper_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventorySlotUIWrapper::execInit)
{
	P_GET_STRUCT(FInventorySlot,Z_Param_SlotData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_SlotData);
	P_NATIVE_END;
}
// End Class UInventorySlotUIWrapper Function Init

// Begin Class UInventorySlotUIWrapper
void UInventorySlotUIWrapper::StaticRegisterNativesUInventorySlotUIWrapper()
{
	UClass* Class = UInventorySlotUIWrapper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetName", &UInventorySlotUIWrapper::execGetName },
		{ "GetWeight", &UInventorySlotUIWrapper::execGetWeight },
		{ "Init", &UInventorySlotUIWrapper::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventorySlotUIWrapper);
UClass* Z_Construct_UClass_UInventorySlotUIWrapper_NoRegister()
{
	return UInventorySlotUIWrapper::StaticClass();
}
struct Z_Construct_UClass_UInventorySlotUIWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventorySlotUIWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventorySlotUIWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "Inventory slot details" },
		{ "ModuleRelativePath", "Public/InventorySlotUIWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventorySlotUIWrapper_GetName, "GetName" }, // 1537147948
		{ &Z_Construct_UFunction_UInventorySlotUIWrapper_GetWeight, "GetWeight" }, // 3631473912
		{ &Z_Construct_UFunction_UInventorySlotUIWrapper_Init, "Init" }, // 981487020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlotUIWrapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventorySlotUIWrapper_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotUIWrapper, Slot), Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 115307985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlotUIWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotUIWrapper_Statics::NewProp_Slot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotUIWrapper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventorySlotUIWrapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotUIWrapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlotUIWrapper_Statics::ClassParams = {
	&UInventorySlotUIWrapper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventorySlotUIWrapper_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotUIWrapper_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotUIWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySlotUIWrapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySlotUIWrapper()
{
	if (!Z_Registration_Info_UClass_UInventorySlotUIWrapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlotUIWrapper.OuterSingleton, Z_Construct_UClass_UInventorySlotUIWrapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySlotUIWrapper.OuterSingleton;
}
template<> INVENTORYPROJECT_API UClass* StaticClass<UInventorySlotUIWrapper>()
{
	return UInventorySlotUIWrapper::StaticClass();
}
UInventorySlotUIWrapper::UInventorySlotUIWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlotUIWrapper);
UInventorySlotUIWrapper::~UInventorySlotUIWrapper() {}
// End Class UInventorySlotUIWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlotUIWrapper, UInventorySlotUIWrapper::StaticClass, TEXT("UInventorySlotUIWrapper"), &Z_Registration_Info_UClass_UInventorySlotUIWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlotUIWrapper), 3811049428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_535977409(TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_InventorySlotUIWrapper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
