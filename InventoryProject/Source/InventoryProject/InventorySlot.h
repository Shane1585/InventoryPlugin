// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"

/**
 * 
 */
class INVENTORYPROJECT_API InventorySlot
{
public:
	UPROPERTY(EditAnywhere)
	Item item;
	
	InventorySlot();

	UFUNCTION(BlueprintCallable, EditAnywhere)
	Item GetItem();

};



