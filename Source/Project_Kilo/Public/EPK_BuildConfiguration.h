#pragma once
#include "CoreMinimal.h"
#include "EPK_BuildConfiguration.generated.h"

UENUM(BlueprintType)
enum EPK_BuildConfiguration {
    Debug,
    Development,
    Test,
    Shipping,
};

