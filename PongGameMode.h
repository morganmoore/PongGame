// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

class ABall;
class UGameHUD;

/**
 * 
 */
UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreasePlayerScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreaseAIScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Logic")
	void SpawnNewBall();

	UFUNCTION(BlueprintPure, BlueprintCallable)
	float SumTest(float A, float B);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Test")
	void TestNative();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
	ABall* BallRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float")
	float BallSpeed = 1400.0f;


protected:

	UPROPERTY( BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHUD* GameHUDRef;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float Direction = -1;

	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	uint8 PlayerScore = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	uint8 AIScore = 0;
};
