#include "SortingFunctions.h"
#include "Item.h"

SortingFunctions::SortingFunctions()
{
}

SortingFunctions::~SortingFunctions()
{
}

bool SortingFunctions::CompareFInventorySlotNamesAsc(const FInventorySlot& a, const FInventorySlot& b)
{
	// Ignore capital letters or it doesn't sort properly.
	return (a.Item.GetRow<FItem>("")->Name.ToLower().Compare(b.Item.GetRow<FItem>("")->Name.ToLower()) <= 0);
}

bool SortingFunctions::CompareFInventorySlotNamesDesc(const FInventorySlot& a, const FInventorySlot& b)
{
	// Ignore capital letters or it doesn't sort properly.
	return (a.Item.GetRow<FItem>("")->Name.ToLower().Compare(b.Item.GetRow<FItem>("")->Name.ToLower()) > 0);
}

bool SortingFunctions::CompareFInventorySlotWeightsAsc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Item.GetRow<FItem>("")->Weight >= b.Item.GetRow<FItem>("")->Weight;
	
}

bool SortingFunctions::CompareFInventorySlotWeightsDesc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Item.GetRow<FItem>("")->Weight < b.Item.GetRow<FItem>("")->Weight;
	
}

bool SortingFunctions::CompareFInventorySlotAmountsAsc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Amount >= b.Amount;
}

bool SortingFunctions::CompareFInventorySlotAmountsDesc(const FInventorySlot& a, const FInventorySlot& b)
{
	return a.Amount < b.Amount;
}
