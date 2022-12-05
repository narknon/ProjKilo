#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/DynamicEntryBoxBase.h"
#include "PK_CommonBoundActions.h"
#include "PK_CommonBoundActionBar.generated.h"

class UPK_CommonBoundActionButton;

UCLASS(Blueprintable)
class UPK_CommonBoundActionBar : public UDynamicEntryBoxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPK_CommonBoundActions> ActionsToMonitor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPK_CommonBoundActionButton> ActionButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayOwningPlayerActionsOnly;
    
public:
    UPK_CommonBoundActionBar();
};

