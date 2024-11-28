// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySlotUIWrapper.h"

#include "IDetailTreeNode.h"


void UInventorySlotUIWrapper::Init(FInventorySlot SlotData, UInventoryComponent* InventoryComponent)
{
	Slot = SlotData;
	RelatedInventory = InventoryComponent;
}

FString UInventorySlotUIWrapper::GetName()
{
	return Slot.Item.Name;
}

FString UInventorySlotUIWrapper::GetSingleItemWeight()
{
	// get rid of extra 0's from the weight
	return FString::SanitizeFloat(Slot.Item.Weight);
}

FString UInventorySlotUIWrapper::GetTotalSlotWeight()
{
	// get rid of extra 0's from the total weight
	return FString::SanitizeFloat(Slot.Item.Weight * Slot.Amount);
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
	Brush.SetResourceObject(Slot.Item.InventoryIcon);
	Brush.ImageSize = FVector2D(64, 64);
	return Brush;
}

bool UInventorySlotUIWrapper::HasInventoryIcon()
{
	return IsValid(Slot.Item.InventoryIcon);
}



