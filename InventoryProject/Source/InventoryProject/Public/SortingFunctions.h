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

	static bool CompareFInventorySlotNamesAsc(const FInventorySlot& a, const FInventorySlot& b);

	static bool CompareFInventorySlotNamesDesc(const FInventorySlot& a, const FInventorySlot& b);

	static bool CompareFInventorySlotWeightsAsc(const FInventorySlot& a, const FInventorySlot& b);

	static bool CompareFInventorySlotWeightsDesc(const FInventorySlot& a, const FInventorySlot& b);

	static bool CompareFInventorySlotAmountsAsc(const FInventorySlot& a, const FInventorySlot& b);

	static bool CompareFInventorySlotAmountsDesc(const FInventorySlot& a, const FInventorySlot& b);

};
