// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"


#include "Boundary.generated.h"


class APongGameMode;

UCLASS()
class PONG_API ABoundary : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoundary();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boundary Type")
	bool IsTop = false;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boundary Type", meta = (BlueprintProtected))
	bool IsGoal = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boundary Type", meta = (BlueprintProtected))
	bool IsLeftGoal = false;

	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	APongGameMode* GameModeRef;

private:
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	UBoxComponent* Bounds;

};
