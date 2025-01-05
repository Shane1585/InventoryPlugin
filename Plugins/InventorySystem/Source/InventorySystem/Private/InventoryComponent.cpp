#include "InventoryComponent.h"

#include "GroundItem.h"
#include "GroundItemDetail.h"
#include "Item.h"
#include "SortingFunctions.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// default functions ---------------------------------------------------------------------------------------------------
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

	// Encumber character if starting overweight
	RecalculateEncumberment();
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


// getters and setters -------------------------------------------------------------------------------------------------
void UInventoryComponent::SetSlots(TArray<FInventorySlot> NewSlots)
{
	this->Slots = NewSlots;
	RecalculateEncumberment();
}

TArray<FInventorySlot> UInventoryComponent::GetSlots()
{
	return Slots;
}

void UInventoryComponent::SetCarryWeightLimit(float NewCarryWeightLimit)
{
	this->CarryWeightLimit = NewCarryWeightLimit;
	
	RecalculateEncumberment();
}

float UInventoryComponent::GetCarryWeightLimit()
{
	if(HasAWeightLimit())
	{
		return CarryWeightLimit;
	}

	return 0;
}

float UInventoryComponent::GetIsEncumbered()
{
	return IsEncumbered;
}

void UInventoryComponent::SetMoveSpeedMultiplierWhileEncumbered(float NewMoveSpeedMultiplierWhileEncumbered)
{
	this->MoveSpeedMultiplierWhileEncumbered = NewMoveSpeedMultiplierWhileEncumbered;

	// Encumberment removed first and then re-calculated, as the movement speed isn't changed from what it was
	// in recalculate. Removing first makes sure it's correct.
	RemoveEncumberment();
	RecalculateEncumberment();
}


float UInventoryComponent::GetMoveSpeedMultiplierWhileEncumbered()
{
	return MoveSpeedMultiplierWhileEncumbered;
}


// other functions -----------------------------------------------------------------------------------------------------
bool UInventoryComponent::HasItem(FName ItemRowName)
{
	// for every slot
	for(int i = 0; i < Slots.Num(); i++)
	{
		// if any slot has a matching name, exit and return true.
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.RowName == ItemRowName)
		{
			return true;
		}
	}
	
	return false;
}

bool UInventoryComponent::AddItem(FName ItemRowName, int Amount)
{
	// for each slot
	for(int i = 0; i < Slots.Num(); i++)
	{
		// searches for a slot with a matching item, then adds amount to the slot
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.RowName == ItemRowName)
		{
			Slots[i].Amount = Slots[i].Amount + Amount;
			RecalculateEncumberment();
			return true; // returns true and exists after the amount has been added to one slot
		}
	}

	//if not found (not added in for loop), add a new slot
	FInventorySlot slot = FInventorySlot();
	slot.Item.RowName = ItemRowName;
	slot.Amount = Amount;
	Slots.Add(slot);
	RecalculateEncumberment();

	return true;
}

bool UInventoryComponent::RemoveItem(FName ItemRowName, int Amount)
{
	// Loops through all slots
	for(int i = 0; i < Slots.Num(); i++)
	{
		// Checks if found the item with matching name
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.RowName == ItemRowName)
		{
			// Gets amount of item and removes it from the slot, or deletes slot if there are too many to remove
			if(ThisSlot.Amount <= Amount) // if inventory has too many to remove
			{
				Slots.RemoveAt(i); // remove the slot
			}
			else
			{
				Slots[i].Amount = Slots[i].Amount - Amount; // remove an amount from the slot
			}

			RecalculateEncumberment();
			
			return true;
		}
	}

	return false;
}

bool UInventoryComponent::DropItem(FName ItemRowName, int Amount, FTransform DropLocation)
{
	//Which slot details are being dropped, and if it can be found
	FInventorySlot DroppedSlot = FInventorySlot();
	bool FoundItem = false;

	// Checks the slots for the item by name
	for(int i = 0; i < Slots.Num(); i++)
	{
		FInventorySlot ThisSlot = Slots[i];
		if(ThisSlot.Item.RowName == ItemRowName) // if found
		{
			//Gets amount of item and removes it from the slot, or deletes slot if there are too few to remove
			// and changes the amount being dropped if there are too few
			if(ThisSlot.Amount <= Amount) 
			{
				Amount = ThisSlot.Amount;
			}
			DroppedSlot.Amount = Amount;
			DroppedSlot.Item = ThisSlot.Item;
			FoundItem = true;
			break; // don't keep searching, exit the for loop
		}
	}

	// If it found it
	if (FoundItem)
	{
		// Get the row in FGroundItemDetail datatable to match the name of the item in the inventory slot
		FDataTableRowHandle ActorDetails;
		ActorDetails.DataTable = Cast<UDataTable>(FSoftObjectPath(TEXT("/InventorySystem/DataTables/DT_GroundItemTable.DT_GroundItemTable")).ResolveObject());

		if (ActorDetails.DataTable != nullptr && ActorDetails.DataTable.IsResolved())
		{
			FGroundItemDetail* FoundDetails = ActorDetails.DataTable->FindRow<FGroundItemDetail>(DroppedSlot.Item.RowName, "");
		
			// If it finds a matching row, 
			if (FoundDetails != nullptr)
			{
				// spawn the item in the world, then remove it from the inventory
				AGroundItem* ThisItem = GetWorld()->SpawnActor<AGroundItem>();
				ThisItem->InitialiseItem(DropLocation, AsConst(*FoundDetails), DroppedSlot);
				RemoveItem(ItemRowName, Amount);
				return true; // if removed, return successful
			}
			else
			{
				// spawn a default mesh in the world, then remove it from the inventory
				AGroundItem* ThisItem = GetWorld()->SpawnActor<AGroundItem>();
				ThisItem->InitialiseItem(DropLocation, FGroundItemDetail(), DroppedSlot);
				RemoveItem(ItemRowName, Amount);
				return true; // if removed, return successful
			}
		} else
		{
			if(GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Error with accessing ground item datatable. This can happen because the datatable is corrupt."));	
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("The most reliable fix is opening the datatable in the unreal engine first, and then trying again."));
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("This happens on some but not all PCs. This is because unreal engines datatables are sometimes unreliable."));
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("It will sometimes start working again on its own."));
			}
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



float UInventoryComponent::GetCurrentWeight()
{
	float TotalWeight = 0;

	// for each slot
	for(int i = 0; i < Slots.Num(); i++)
	{
		// add to the total weight the weight of an item, multiplied by the amount
		TotalWeight += Slots[i].Item.GetRow<FItem>("")->Weight * Slots[i].Amount;
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
		SortedSlots = SortingFunctions::BubbleSortNameAsc(SortedSlots);
		//SortedSlots.Sort(SortingFunctions::CompareFInventorySlotNamesAsc);
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
		SortedSlots = SortingFunctions::BubbleSortWeightAsc(SortedSlots);
		//SortedSlots.Sort(SortingFunctions::CompareFInventorySlotWeightsAsc);
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



