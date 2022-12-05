#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "PK_PlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPK_PlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    UPK_PlayerInput();
    UFUNCTION(BlueprintCallable)
    void SetAxisScale(const FName AxisName, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisInvert(const FName AxisName, bool bInvert);
    
};

