// Fill out your copyright notice in the Description page of Project Settings.


#include "SortingFunctions.h"

SortingFunctions::SortingFunctions()
{
}

SortingFunctions::~SortingFunctions()
{
}

bool SortingFunctions::CompareFInventorySlotNamesAsc(const FInventorySlot& a, const FInventorySlot& b)
{
	return (a.Item.Name.ToLower().Compare(b.Item.Name.ToLower()) <= 0);
}

bool SortingFunctions::CompareFInventorySlotNamesDesc(const FInventorySlot& a, const FInventorySlot& b)
{
	return (a.Item.Name.ToLower().Compare(b.Item.Name.ToLower()) > 0);
}

bool SortingFunctions::CompareFInventorySlotWeightsAsc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Item.Weight >= b.Item.Weight;
	
}

bool SortingFunctions::CompareFInventorySlotWeightsDesc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Item.Weight < b.Item.Weight;
	
}

bool SortingFunctions::CompareFInventorySlotAmountsAsc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Amount >= b.Amount;
}

bool SortingFunctions::CompareFInventorySlotAmountsDesc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Amount < b.Amount;
}
