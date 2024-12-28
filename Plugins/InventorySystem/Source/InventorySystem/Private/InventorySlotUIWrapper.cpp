#include "InventorySlotUIWrapper.h"
#include "Item.h"

// getters and setters -------------------------------------------------------------------------------------------------
FInventorySlot UInventorySlotUIWrapper::GetSlot()
{
	return Slot;
}

UInventoryComponent* UInventorySlotUIWrapper::GetRelatedInventory()
{
	return RelatedInventory;
}

void UInventorySlotUIWrapper::Init(FInventorySlot SlotData, UInventoryComponent* InventoryComponent)
{
	Slot = SlotData;
	RelatedInventory = InventoryComponent;
}


// other functions -----------------------------------------------------------------------------------------------------
FName UInventorySlotUIWrapper::GetRowName()
{
	return Slot.Item.RowName;
}

FString UInventorySlotUIWrapper::GetName()
{
	return Slot.Item.GetRow<FItem>("")->Name;
}

FString UInventorySlotUIWrapper::GetSingleItemWeight()
{
	// get rid of extra 0's from the weight
	return FString::SanitizeFloat(Slot.Item.GetRow<FItem>("")->Weight);
}

FString UInventorySlotUIWrapper::GetTotalSlotWeight()
{
	// get rid of extra 0's from the total weight
	return FString::SanitizeFloat(Slot.Item.GetRow<FItem>("")->Weight * Slot.Amount);
}

FString UInventorySlotUIWrapper::GetAmount()
{
	return FString::FromInt(Slot.Amount);
}

FSlateBrush UInventorySlotUIWrapper::GetInventoryIconBrush()
{
	// Sets brush up with an image size and icon
	// SlateBrushes are used in UI for images.
	FSlateBrush Brush;
	Brush.SetResourceObject(Slot.Item.GetRow<FItem>("")->InventoryIcon);
	Brush.ImageSize = FVector2D(64, 64);
	return Brush;
}

bool UInventorySlotUIWrapper::HasInventoryIcon()
{
	return IsValid(Slot.Item.GetRow<FItem>("")->InventoryIcon);
}



