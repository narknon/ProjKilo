#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "ESteamResult.h"
#include "FriendsGetFollowerCount.generated.h"

USTRUCT(BlueprintType)
struct FFriendsGetFollowerCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    STEAMCORE_API FFriendsGetFollowerCount();
};

