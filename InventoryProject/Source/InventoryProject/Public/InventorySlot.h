// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "InventorySlot.generated.h"

/**
 * Stores information about a single slot in the inventory
 */
USTRUCT(BlueprintType, Blueprintable)
struct INVENTORYPROJECT_API FUInventorySlot
{
	GENERATED_BODY()

	/**
	 * Item held in this slot
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory slot details")
	FUItem Item;

	FUInventorySlot()
	{
		Item = FUItem();
	}
};
