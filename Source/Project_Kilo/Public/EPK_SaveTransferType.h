#pragma once
#include "CoreMinimal.h"
#include "EPK_SaveTransferType.generated.h"

UENUM(BlueprintType)
enum EPK_SaveTransferType {
    SaveTransfer_Fail,
    SaveTransfer_Profile,
    SaveTransfer_Game,
    SaveTransfer_MAX UMETA(Hidden),
};

