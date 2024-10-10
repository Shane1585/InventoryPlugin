// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySlotUIWrapper.h"

void UInventorySlotUIWrapper::Init(FInventorySlot SlotData)
{
	Slot = SlotData;
}

FString UInventorySlotUIWrapper::GetName()
{
	return Slot.Item.Name;
}
