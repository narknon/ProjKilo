#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "PK_CommonButtonFocusedActions.h"
#include "PK_CommonButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPK_CommonButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPK_CommonButtonFocusedActions> FocusedInputActions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ButtonText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
public:
    UPK_CommonButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonStyle();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonText(const FText& InText);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFocusInputAction(FName InputName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusedInputActionEvent(FName InputName);
    
};

