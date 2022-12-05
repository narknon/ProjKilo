#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PK_PlayerController.generated.h"

class UPK_PlayerInput;

UCLASS(Blueprintable)
class APK_PlayerController : public APlayerController {
    GENERATED_BODY()
public:
    APK_PlayerController();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPK_PlayerInput* GetPlayerInput() const;
    
};

