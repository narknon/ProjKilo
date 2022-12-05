#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "Framework/Commands/InputChord.h"
#include "PK_CommonInputSelector.generated.h"

class UInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class UPK_CommonInputSelector : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputKeySelector* InputSelector;
    
public:
    UPK_CommonInputSelector();
    UFUNCTION(BlueprintCallable)
    void SetSelectedKey(const FInputChord& InSelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void ForceRestoreFocusDuringCapture();
    
};

