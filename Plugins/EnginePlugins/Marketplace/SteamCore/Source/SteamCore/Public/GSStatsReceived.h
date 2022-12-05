#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "ESteamResult.h"
#include "GSStatsReceived.generated.h"

USTRUCT(BlueprintType)
struct FGSStatsReceived {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    STEAMCORE_API FGSStatsReceived();
};

