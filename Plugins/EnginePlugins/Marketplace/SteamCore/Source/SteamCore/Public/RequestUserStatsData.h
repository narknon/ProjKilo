#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "SteamGameID.h"
#include "ESteamResult.h"
#include "RequestUserStatsData.generated.h"

USTRUCT(BlueprintType)
struct FRequestUserStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    STEAMCORE_API FRequestUserStatsData();
};

