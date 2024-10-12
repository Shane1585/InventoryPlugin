// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

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

TArray<UInventorySlotUIWrapper*> UInventoryComponent::GetInventorySlots()
{
	TArray<UInventorySlotUIWrapper*> InventorySlots;
	
	for(int i = 0; i < Slots.Num(); i++)
	{
		UInventorySlotUIWrapper* Wrapper = NewObject<UInventorySlotUIWrapper>();
		Wrapper->Init(Slots[i]);
		InventorySlots.Add(Wrapper);
	}

	return InventorySlots;
}



