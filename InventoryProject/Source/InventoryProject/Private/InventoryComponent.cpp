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
	FInventorySlot slot = FInventorySlot();
	slot.Item = Item;
	Slots.Add(slot);
	return true;
}
//---------------------------------------------------------------------------------------------
TArray<UInventorySlotUIWrapper*> UInventoryComponent::GetInventorySlots(int GetAmount)
{
	TArray<UInventorySlotUIWrapper*> InventorySlots;
	for(int i = 0; i < Amount.Num(1); i++)
}
//-------------------------------------------------------------------------------
bool UInventoryComponent::RemoveItem(FString Name, int Amount)
{
	for(int i = 0; i < Slots.Num(); i++)
	{
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.Name == Name)
		{
			Slots.RemoveAt(i);
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
		TotalWeight += Slots[i].Item.Weight;
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
	if(FieldName == "name")
	{
		
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotNamesAsc);
		
	}
	else if(FieldName == "weight")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotWeightsAsc);
	}
	else if(FieldName == "-name")
	{
		
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotNamesDesc);
		
	}
	else if(FieldName == "-weight")
	{
		SortedSlots.Sort(SortingFunctions::CompareFInventorySlotWeightsDesc);
	}
	return SortedSlots;
}





