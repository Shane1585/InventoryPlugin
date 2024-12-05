// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryInteractArea.h"

#include "ComponentUtils.h"

// Sets default values for this component's properties
UInventoryInteractArea::UInventoryInteractArea()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	this->InteractTriggerBox->SetupAttachment(this->GetOwner()->GetRootComponent());
	this->InteractTriggerBox->SetRelativeTransform(FTransform());
	this->InteractTriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	this->InteractTriggerBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	this->InteractTriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	this->InteractTriggerBox->SetGenerateOverlapEvents(true);

	// ...
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
	this->InteractTriggerBox->GetOwner()->OnActorBeginOverlap.AddDynamic(this, &UInventoryInteractArea::OverlappingInventory);
	this->InteractTriggerBox->GetOwner()->OnActorEndOverlap.AddDynamic(this, &UInventoryInteractArea::StoppedOverlappingInventory);
}

void UInventoryInteractArea::OverlappingInventory(AActor* OverlappedActor, AActor* OtherActor)
{
	if(OtherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		TSet<UActorComponent*> Components = GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponents();
	}
}

void UInventoryInteractArea::StoppedOverlappingInventory(AActor* OverlappedActor, AActor* OtherActor)
{
}

