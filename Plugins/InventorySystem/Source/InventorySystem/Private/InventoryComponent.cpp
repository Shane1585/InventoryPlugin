// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

#include "SortingFunctions.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UInventoryComponent::HasItem(FString Name)
{
	for(int i = 0; i < Slots.Num(); i++)
	{
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.Name==Name)
		{
			return true;
		}
	}
	
	return false;
}

bool UInventoryComponent::AddItem(FItem Item, int Amount)
{
	//searches for a slot with a matching item, then adds amount to the slot
	for(int i = 0; i < Slots.Num(); i++)
	{
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item == Item)
		{
			Slots[i].Amount = Slots[i].Amount + Amount;
			return true;
		}
	}

	//if not found (not added), add a new slot
	FInventorySlot slot = FInventorySlot();
	slot.Item = Item;
	slot.Amount = Amount;
	Slots.Add(slot);
	return true;
}

bool UInventoryComponent::RemoveItem(FString Name, int Amount)
{
	//Loops through all slots
	for(int i = 0; i < Slots.Num(); i++)
	{
		// Checks if we have found the item with matching name
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.Name == Name)
		{
			//Gets amount of item and removes it from the slot, or deletes slot if there are too many to remove
			if(ThisSlot.Amount <= Amount) // if you have too many to remove
			{
				Slots.RemoveAt(i); // remove slot
			}
			else
			{
				Slots[i].Amount = Slots[i].Amount - Amount; // remove an amount
			}
			
			return true;
		}
	}
	
	return false;
}

TArray<UInventorySlotUIWrapper*> UInventoryComponent::GetInventorySlots(FString FieldName)
{
	TArray<UInventorySlotUIWrapper*> InventorySlots;
	
	TArray<FInventorySlot> SortedSlots = GetOrderBy(FieldName);
	
	for(int i = 0; i < SortedSlots.Num(); i++)
	{
		UInventorySlotUIWrapper* Wrapper = NewObject<UInventorySlotUIWrapper>();
		Wrapper->Init(SortedSlots[i]);
		InventorySlots.Add(Wrapper);
	}

	return InventorySlots;
}

bool UInventoryComponent::HasAWeightLimit()
{
	return (CarryWeightLimit > 0);
}

float UInventoryComponent::GetCarryWeightLimit()
{
	if(HasAWeightLimit())
	{
		return CarryWeightLimit;
	}

	return 0;
}

float UInventoryComponent::GetCurrentWeight()
{
	float TotalWeight = 0;
	
	for(int i = 0; i < Slots.Num(); i++)
	{
		TotalWeight += Slots[i].Item.Weight * Slots[i].Amount;
	}
	
	return TotalWeight;
}

float UInventoryComponent::GetRemainingWeight()
{
	if(HasAWeightLimit())
	{
		return GetCarryWeightLimit() - GetCurrentWeight();
	}
	
	return 0;
}

TArray<FInventorySlot> UInventoryComponent::GetOrderBy(FString FieldName)
{
	TArray<FInventorySlot> SortedSlots = Slots;

	if(FieldName.ToLower() == "name")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotNamesAsc);
	}
	else if (FieldName.ToLower() == "-name")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotNamesDesc);
	}
	else if (FieldName.ToLower() == "amount")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotAmountsAsc);
	}
	else if (FieldName.ToLower() == "-amount")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotAmountsDesc);
	}
	else if (FieldName.ToLower() == "weight")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotWeightsAsc);
	}
	else if (FieldName.ToLower() == "-weight")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotWeightsDesc);
	}
	
	return SortedSlots;
}





