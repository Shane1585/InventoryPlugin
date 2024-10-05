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
		UInventorySlot* ThisSlot = Slots[i];
		if(ThisSlot->GetItem()->GetName() == Name)
		{
			return true;
		}
	}
	
	return false;
}

bool UInventoryComponent::AddItem(UItem* Item, int Amount)
{
	UInventorySlot slot = UInventorySlot();
	slot.SetItem(Item);
	Slots.Add(&slot);
	return true;
}

bool UInventoryComponent::RemoveItem(FString Name, int Amount)
{
	for(int i = 0; i < Slots.Num(); i++)
	{
		UInventorySlot* ThisSlot = Slots[i];
		if(ThisSlot->GetItem()->GetName() == Name)
		{
			Slots.RemoveAt(i);
			return true;
		}
	}
	
	return false;
}

TArray<UInventorySlot*> UInventoryComponent::GetInventorySlots()
{
	return Slots;
}



