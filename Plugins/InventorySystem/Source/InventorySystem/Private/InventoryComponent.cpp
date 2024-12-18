// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

#include "GroundItem.h"
#include "GroundItemDetail.h"
#include "SGraphPinDataTableRowName.h"
#include "SortingFunctions.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

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
	// for every slot
	for(int i = 0; i < Slots.Num(); i++)
	{
		// if any slot has a matching name, exit and return true.
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
	// for each slot
	for(int i = 0; i < Slots.Num(); i++)
	{
		// searches for a slot with a matching item, then adds amount to the slot
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item == Item)
		{
			Slots[i].Amount = Slots[i].Amount + Amount;
			RecalculateEncumberment();
			return true; // returns true and exists after the amount has been added to one slot
		}
	}

	//if not found (not added in for loop), add a new slot
	FInventorySlot slot = FInventorySlot();
	slot.Item = Item;
	slot.Amount = Amount;
	Slots.Add(slot);
	RecalculateEncumberment();

	return true;
}

bool UInventoryComponent::RemoveItem(FString Name, int Amount)
{
	// Loops through all slots
	for(int i = 0; i < Slots.Num(); i++)
	{
		// Checks if found the item with matching name
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.Name == Name)
		{
			// Gets amount of item and removes it from the slot, or deletes slot if there are too many to remove
			if(ThisSlot.Amount <= Amount) // if inventory has too many to remove
			{
				Slots.RemoveAt(i); // remove slot
			}
			else
			{
				Slots[i].Amount = Slots[i].Amount - Amount; // remove an amount
			}

			RecalculateEncumberment();
			
			return true;
		}
	}

	return false;
}

bool UInventoryComponent::DropItem(FString Name, int Amount, FTransform DropLocation)
{
	//Which slot details are being dropped, and if it can be found
	FInventorySlot DroppedSlot;
	bool FoundItem = false;

	// Checks the slots for the item by name
	for(int i = 0; i < Slots.Num(); i++)
	{
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.Name == Name) // if found
		{
			//Gets amount of item and removes it from the slot, or deletes slot if there are too few to remove
			// and changes the amount being dropped if there are too few
			if(ThisSlot.Amount <= Amount) 
			{
				Amount = ThisSlot.Amount;
			}
			DroppedSlot = ThisSlot;
			FoundItem = true;
			break; // don't keep searching, exit the for loop
		}
	}

	// If it found it
	if (FoundItem)
	{
		// Get the row in FGroundItemDetail datatable to match the name of the item in the inventory slot
		FDataTableRowHandle ActorDetails;
		ActorDetails.DataTable = Cast<UDataTable>(FSoftObjectPath(TEXT("/InventorySystem/DataTables/GroundItemTable.GroundItemTable")).ResolveObject());
		FGroundItemDetail* FoundDetails = ActorDetails.DataTable->FindRow<FGroundItemDetail>(*DroppedSlot.Item.Name, "");

		// If it finds a matching row, 
		if (FoundDetails != nullptr)
		{
			// spawn the item in the world, then remove it from the inventory
			AGroundItem* ThisItem = GetWorld()->SpawnActor<AGroundItem>();
			ThisItem->InitialiseItem(DropLocation, AsConst(*FoundDetails), DroppedSlot);
			RemoveItem(Name, Amount);
			return true; // if removed, return successful
		}
		else
		{
			// spawn a default mesh in the world, then remove it from the inventory
			AGroundItem* ThisItem = GetWorld()->SpawnActor<AGroundItem>();
			ThisItem->InitialiseItem(DropLocation, FGroundItemDetail(), DroppedSlot);
			RemoveItem(Name, Amount);
			return true; // if removed, return successful
		}
	}

	return false; // if not removed, return not successful
}

TArray<UInventorySlotUIWrapper*> UInventoryComponent::GetInventorySlots(FString FieldName)
{
	// Creates variable to store UI inventory slots, then gets inventory slots ordered by the field name
	TArray<UInventorySlotUIWrapper*> InventorySlots;
	TArray<FInventorySlot> SortedSlots = GetOrderBy(FieldName);

	// for each sorted slot
	for(int i = 0; i < SortedSlots.Num(); i++)
	{
		// Wraps inventory slot, adds it to the list of wrapped slots.
		UInventorySlotUIWrapper* Wrapper = NewObject<UInventorySlotUIWrapper>();
		Wrapper->Init(SortedSlots[i], this);
		InventorySlots.Add(Wrapper);
	}
	
	

	return InventorySlots;
}

bool UInventoryComponent::HasAWeightLimit()
{
	// weight limit enabled if more than 0.
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

	// for each slot
	for(int i = 0; i < Slots.Num(); i++)
	{
		// add to the total weight the weight of an item, multiplied by the amount
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

	// Use correct sorting function by the name of the field passed in
	// Tried to make this a switch case but didn't work.
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

void UInventoryComponent::RecalculateEncumberment()
{
	// If encumberment doesn't match previous encumberment, then add or remove encumberment
	bool ShouldBeEncumbered = NeedsEncumberment();
	if (ShouldBeEncumbered != IsEncumbered)
	{
		if (ShouldBeEncumbered)
		{
			AddEncumberment();
		}
		else
		{
			RemoveEncumberment();
		}
	}
}

bool UInventoryComponent::NeedsEncumberment()
{
	return(
		HasAWeightLimit() // needs a weight limit to be encumbered AND:
		&& GetRemainingWeight() <= 0 // needs to have negative remaining limit to be encumbered AND:
		&& GetOwner()->IsA(ACharacter::StaticClass()) // needs to be a character to be encumbered
		);
}

void UInventoryComponent::AddEncumberment()
{
	// If a character, and not already encumbered
	if (GetOwner()->IsA(ACharacter::StaticClass())  && IsEncumbered == false)
	{
		// Reduce max walk speed to encumber the character
		ACharacter* OwningCharacter = Cast<ACharacter>(GetOwner());
		OwningCharacter->GetCharacterMovement()->MaxWalkSpeed *= MoveSpeedMultiplierWhileEncumbered;
		IsEncumbered = true;
	}
}

void UInventoryComponent::RemoveEncumberment()
{
	// If a character, and encumbered

	if (GetOwner()->IsA(ACharacter::StaticClass()) && IsEncumbered == true)
	{
		// Increase max walk speed to encumber the character
		ACharacter* OwningCharacter = Cast<ACharacter>(GetOwner());
		OwningCharacter->GetCharacterMovement()->MaxWalkSpeed *= (1/MoveSpeedMultiplierWhileEncumbered);
		IsEncumbered = false;
	}
}



