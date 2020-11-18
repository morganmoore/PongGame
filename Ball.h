// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "Ball.generated.h"

class APaddle;

UCLASS()
class PONG_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

protected:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void HitPaddle(APaddle* Paddle);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void HitBoundary();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	class ABoundary* BoundaryRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	class APongGameMode* GameModeRef;


	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
	UPaperSpriteComponent* Sprite;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	USphereComponent* Sphere;



};
