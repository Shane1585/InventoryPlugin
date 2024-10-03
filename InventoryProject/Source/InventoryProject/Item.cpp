// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"


Item::Item()
{
}

Item::~Item()
{
}


FString Item::GetName()
{
    return name;
}


void Item::SetName(FString newName) {
    name = newName;
}

