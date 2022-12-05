#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "SteamGameID.h"
#include "LobbyInviteData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyInviteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameId;
    
    STEAMCORE_API FLobbyInviteData();
};

