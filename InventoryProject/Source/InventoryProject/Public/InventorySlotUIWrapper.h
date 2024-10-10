// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlot.h"
#include "InventorySlotUIWrapper.generated.h"


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class INVENTORYPROJECT_API UInventorySlotUIWrapper : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory slot details")
	FInventorySlot Slot;

	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	void Init(FInventorySlot SlotData);

	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	FString GetName();
};
