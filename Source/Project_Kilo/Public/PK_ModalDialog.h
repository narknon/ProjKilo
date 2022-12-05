#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PK_OnModalConfirmActionDelegate.h"
#include "PK_ModalDialog.generated.h"

class UPK_CommonBoundActionBar;

UCLASS(Blueprintable, EditInlineNew)
class UPK_ModalDialog : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPK_OnModalConfirmAction OnModalConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseOnConfirmation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfirmOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPK_CommonBoundActionBar* ActionBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModalText;
    
public:
    UPK_ModalDialog();
    UFUNCTION(BlueprintCallable)
    void SetModalText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetModalConfirmOnly(bool bInConfirmOnly);
    
};

