// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "InventorySlot.generated.h"

/**
 * Stores information about a single slot in the inventory
 */
UCLASS()
class INVENTORYPROJECT_API UInventorySlot : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Item held in this slot
	 */
	UPROPERTY(Blueprintable, EditAnywhere, Category = "Inventory slot details")
	UItem* Item;

	/**
	 * @return The item held in this slot
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory slot details")
	UItem* GetItem();

	/**
	 * 
	 * @param NewItem The item to store in this slot
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory slot details")
	void SetItem(UItem* NewItem);
};
