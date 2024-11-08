// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

bool FItem::operator==(FItem Other)
{
	return (Name == Other.Name && Weight == Other.Weight);
}
