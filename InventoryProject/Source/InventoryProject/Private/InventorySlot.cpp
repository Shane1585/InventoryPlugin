// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySlot.h"

UItem* UInventorySlot::GetItem()
{
	return this->Item;
}

void UInventorySlot::SetItem(UItem* NewItem)
{
	this->Item = NewItem;
}

FString UInventorySlot::GetName()
{
	return GetItem()->GetName();
}

