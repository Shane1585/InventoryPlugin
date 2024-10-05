// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

FString UItem::GetName()
{
	return Name;
}

void UItem::SetName(FString NewName)
{
	this->Name = NewName;
}
