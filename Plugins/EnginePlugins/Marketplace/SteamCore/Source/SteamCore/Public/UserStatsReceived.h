#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "ESteamResult.h"
#include "UserStatsReceived.generated.h"

USTRUCT(BlueprintType)
struct FUserStatsReceived {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID GameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    STEAMCORE_API FUserStatsReceived();
};

