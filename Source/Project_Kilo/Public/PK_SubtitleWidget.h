#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PK_SubtitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPK_SubtitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPK_SubtitleWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSubtitleText(const FText& InText);
    
};

