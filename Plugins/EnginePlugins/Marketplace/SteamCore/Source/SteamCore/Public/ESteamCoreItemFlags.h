#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreItemFlags.generated.h"

UENUM(BlueprintType)
enum ESteamCoreItemFlags {
    ENoTrade,
    ERemoved = 0x8,
    EConsumed,
};

