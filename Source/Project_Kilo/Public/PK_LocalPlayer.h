#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/LocalPlayer.h"
#include "PK_LocalPlayer.generated.h"

class UPK_RootWidget;

UCLASS(Blueprintable, NonTransient)
class UPK_LocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPK_RootWidget* RootWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPK_RootWidget> RootWidgetClass;
    
public:
    UPK_LocalPlayer();
};

