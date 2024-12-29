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

TArray<FInventorySlot> SortingFunctions::BubbleSortNameAsc(TArray<FInventorySlot> Slots)
{
	bool SwappedSomething = false;

	// loop through the array
	for (int a = 0; a < Slots.Num(); a++)
	{
		SwappedSomething = false;
		// loop through the rest of the array
		for (int b = 0; b < Slots.Num() - a - 1; b++)
		{
			if ((Slots[b].Item.GetRow<FItem>("")->Name.ToLower()) > (Slots[b + 1].Item.GetRow<FItem>("")->Name.ToLower()))
			{
				Slots.Swap(b, b + 1);
				SwappedSomething = true;
			}
		}

		if (!SwappedSomething)
		{
			break; // exit out of the loop
		}
	}
	
	return Slots;
}

TArray<FInventorySlot> SortingFunctions::BubbleSortWeightAsc(TArray<FInventorySlot> Slots)
{
	bool SwappedSomething = false;

	// loop through the array
	for (int a = 0; a < Slots.Num(); a++)
	{
		SwappedSomething = false;
		// loop through the rest of the array
		for (int b = 0; b < Slots.Num() - a - 1; b++)
		{
			if ((Slots[b].Item.GetRow<FItem>("")->Weight) > (Slots[b + 1].Item.GetRow<FItem>("")->Weight))
			{
				Slots.Swap(b, b + 1);
				SwappedSomething = true;
			}
		}

		if (!SwappedSomething)
		{
			break; // exit out of the loop
		}
	}
	
	return Slots;
}
