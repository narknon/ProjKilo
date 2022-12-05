#pragma once
#include "CoreMinimal.h"
#include "SteamGameID.h"
#include "ESteamResult.h"
#include "GlobalAchievementPercentagesReady.generated.h"

USTRUCT(BlueprintType)
struct FGlobalAchievementPercentagesReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FGlobalAchievementPercentagesReady();
};

