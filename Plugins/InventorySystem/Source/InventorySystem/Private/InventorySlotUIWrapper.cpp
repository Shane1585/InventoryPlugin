// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySlotUIWrapper.h"

#include "IDetailTreeNode.h"


void UInventorySlotUIWrapper::Init(FInventorySlot SlotData)
{
	Slot = SlotData;
}

FString UInventorySlotUIWrapper::GetName()
{
	return Slot.Item.Name;
}

FString UInventorySlotUIWrapper::GetSingleItemWeight()
{
	return FString::SanitizeFloat(Slot.Item.Weight);
}

FString UInventorySlotUIWrapper::GetTotalSlotWeight()
{
	return FString::SanitizeFloat(Slot.Item.Weight * Slot.Amount);
}

FString UInventorySlotUIWrapper::GetAmount()
{
	return FString::FromInt(Slot.Amount);
}

