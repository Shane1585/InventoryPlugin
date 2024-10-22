// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"

/**
 * 
 */
class INVENTORYPROJECT_API SortingFunctions
{
public:
	SortingFunctions();
	~SortingFunctions();

	static bool CompareFInventorySlotNames(const FInventorySlot& a, const FInventorySlot& b);

	static bool CompareFInventorySlotWeights(const FInventorySlot& a, const FInventorySlot& b);
};
