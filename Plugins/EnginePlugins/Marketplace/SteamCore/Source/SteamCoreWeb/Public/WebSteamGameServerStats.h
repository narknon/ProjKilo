#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebSubsystem.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "WebSteamGameServerStats.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamGameServerStats : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamGameServerStats();
    UFUNCTION(BlueprintCallable)
    void GetGameServerPlayerStatsForGame(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& GameId, int32 AppID, const FString& RangeStart, const FString& RangeEnd, int32 MaxResults);
    
};

