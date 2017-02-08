// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "MyPaperCharacter.h"
#include "PaperFlipbookComponent.h"



AMyPaperCharacter::AMyPaperCharacter() {


	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SetupAttachment(RootComponent);


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 2048.0f;
	Camera->SetupAttachment(CameraBoom);


}



void AMyPaperCharacter::BeginPlay() {
	Super::BeginPlay();

	GetSprite()->SetFlipbook(Idle);

}