// Fill out your copyright notice in the Description page of Project Settings.


#include "SortingFunctions.h"

SortingFunctions::SortingFunctions()
{
}

SortingFunctions::~SortingFunctions()
{
}

bool SortingFunctions::CompareFInventorySlotNames(const FInventorySlot& a, const FInventorySlot& b)
{
	return (a.Item.Name.ToLower().Compare(b.Item.Name.ToLower()) <= 0);
}
