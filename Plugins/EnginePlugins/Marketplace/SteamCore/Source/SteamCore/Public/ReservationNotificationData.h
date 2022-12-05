#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "PartyBeaconID.h"
#include "ReservationNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FReservationNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyBeaconID BeaconID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDJoiner;
    
    STEAMCORE_API FReservationNotificationData();
};

