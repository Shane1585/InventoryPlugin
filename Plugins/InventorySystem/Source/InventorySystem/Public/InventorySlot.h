// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "InventorySlot.generated.h"

/**
 * Stores information about a single slot in the inventory
 *
 * This is currently an item + an amount of an item.
 */
USTRUCT(BlueprintType, Blueprintable)
struct INVENTORYSYSTEM_API FInventorySlot
{

	GENERATED_BODY()

	/**
	 * Item held in this slot
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory slot details")
	FItem Item;

	/**
	 * The amount of the item held in this slot.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	int Amount;
	
	FInventorySlot()
	{
		// Set some sensible defaults in the constructor to prevent errors
		Item = FItem();
		Amount = 1;
	}
};
