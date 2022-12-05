#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PK_CommonButtonFocusedActions.generated.h"

USTRUCT(BlueprintType)
struct FPK_CommonButtonFocusedActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringInputAction;
    
    PROJECT_KILO_API FPK_CommonButtonFocusedActions();
};

