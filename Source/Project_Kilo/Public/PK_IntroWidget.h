#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PK_IntroWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPK_IntroWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPK_IntroWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationSkipped();
    
};

