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

	/**
	 * @param a InventorySlot A
	 * @param b InventorySlot B
	 * @return True, if A's name is bigger or the same (bigger = earlier in the alphabet)
	 */
	static bool CompareFInventorySlotNamesAsc(const FInventorySlot& a, const FInventorySlot& b);

	/**
	 * @param a InventorySlot A
	 * @param b InventorySlot B
	 * @return True, if A's name is smaller (smaller = later in the alphabet)
	 */	static bool CompareFInventorySlotNamesDesc(const FInventorySlot& a, const FInventorySlot& b);

	/**
	* @param a InventorySlot A
	* @param b InventorySlot B
	* @return True, if A's weight is bigger or the same (individual item weight)
	**/
	static bool CompareFInventorySlotWeightsAsc(const FInventorySlot& a, const FInventorySlot& b);

	/**
	* @param a InventorySlot A
	* @param b InventorySlot B
	* @return True, if A's weight is smaller (individual item weight)
	**/
	static bool CompareFInventorySlotWeightsDesc(const FInventorySlot& a, const FInventorySlot& b);

	/**
	* @param a InventorySlot A
	* @param b InventorySlot B
	* @return True, if the number of A's items is larger or the same
	**/
	static bool CompareFInventorySlotAmountsAsc(const FInventorySlot& a, const FInventorySlot& b);

	/**
	* @param a InventorySlot A
	* @param b InventorySlot B
	* @return True, if the number of A's items is smaller
	**/	static bool CompareFInventorySlotAmountsDesc(const FInventorySlot& a, const FInventorySlot& b);

};
