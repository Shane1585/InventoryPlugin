// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryInteractArea.h"

#include "ParentInventoryUIComponent.h"

// Sets default values for this component's properties
UInventoryInteractArea::UInventoryInteractArea()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UInventoryInteractArea::BeginPlay()
{
	Super::BeginPlay();

	// set up trigger box on start
	InitialiseTriggerBox();
}


// Called every frame
void UInventoryInteractArea::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryInteractArea::InitialiseTriggerBox()
{
	// sets the trigger box size and adds an overlap event to this actor
	this->InteractTriggerBox->SetBoxExtent(TriggerBoxScale);
	this->InteractTriggerBox->SetRelativeTransform(FTransform());
	this->InteractTriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	this->InteractTriggerBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	this->InteractTriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	this->InteractTriggerBox->SetGenerateOverlapEvents(true);

    // attaches trigger box to this actor so they move together
	this->InteractTriggerBox->AttachToComponent(this->GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	// adds events for begin and end overlap
	this->GetOwner()->OnActorBeginOverlap.AddDynamic(this, &UInventoryInteractArea::OverlappingInventory);
	this->GetOwner()->OnActorEndOverlap.AddDynamic(this, &UInventoryInteractArea::StoppedOverlappingInventory);
}

void UInventoryInteractArea::OverlappingInventory(AActor* OverlappedActor, AActor* OtherActor)
{
	// if the other actor is the player
	if(OtherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		// Gets the inventory of the overlapping actor
		TArray<UParentInventoryUIComponent*> UIComponents;
		TArray<UInventoryComponent*> InventoryComponents;

		GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponents<UParentInventoryUIComponent>(UIComponents);
		GetOwner()->GetComponents<UInventoryComponent>(InventoryComponents);

		if (InventoryComponents.Num() > 0)
		{
			for(int i = 0; i < UIComponents.Num(); i++)
			{
				// sets up the overlapping actors inventory to be showable on players UI, if not a player inventory
				if (!UIComponents[i]->IsPlayerInventory)
				{
					// 2nd UI component on the player is the non-player inventory UI
					UIComponents[1]->EnableInventoryUI(InventoryComponents[0]);
					break;
				}
			}
		}
	}
}

void UInventoryInteractArea::StoppedOverlappingInventory(AActor* OverlappedActor, AActor* OtherActor)
{
	// If non-overlapping actor is the player
	if(OtherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		TArray<UParentInventoryUIComponent*> UIComponents;
		
		// 1. How do we know if the component we're enabling isn't the player inventory component?
		// 2. What if they haven't set it up right, and there aren't any valid UI or inventory components?
		GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponents<UParentInventoryUIComponent>(UIComponents);
		UIComponents[1]->DisableInventoryUI();

	}


}

