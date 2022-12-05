#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "PK_CommonBoundActionButton.generated.h"

class UCommonActionWidget;
class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPK_CommonBoundActionButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* AlternativeInputActionWidget;
    
public:
    UPK_CommonBoundActionButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInputAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidAlternativeInputAction();
    
};

