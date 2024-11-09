// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"

/**
 * This stores a number of sorting predicate functions in one place. This is because if unreal is passed one
 * of these functions to the .Sort() function of a TArray, it sorts it without the need for something more
 * complicated.
 */
class INVENTORYSYSTEM_API SortingFunctions
{
public:
	SortingFunctions();
	~SortingFunctions();

	// Compares name of value a to b, returns true if a is bigger or the same.
	static bool CompareFInventorySlotNamesAsc(const FInventorySlot& a, const FInventorySlot& b);

	// Compares name of value a to b, returns true if a is smaller.
	static bool CompareFInventorySlotNamesDesc(const FInventorySlot& a, const FInventorySlot& b);

	// Compares weight of value a to b, returns true if a is bigger or the same.
	static bool CompareFInventorySlotWeightsAsc(const FInventorySlot& a, const FInventorySlot& b);

	// Compares weight of value a to b, returns true if a is smaller.
	static bool CompareFInventorySlotWeightsDesc(const FInventorySlot& a, const FInventorySlot& b);

	// Compares amounts of item in a to b, returns true if a is bigger or the same.
	static bool CompareFInventorySlotAmountsAsc(const FInventorySlot& a, const FInventorySlot& b);

	// Compares amounts of a to b, returns true if a is smaller.
	static bool CompareFInventorySlotAmountsDesc(const FInventorySlot& a, const FInventorySlot& b);

};
