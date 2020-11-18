// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class PONG_API UGameHUD : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void UpdateAIScore(int Score);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void UpdatePlayerScore(int Score);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Test")
	void TestNative();


	
};
