#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnChangeNumOpenSlotsCallbackDelegate.h"
#include "ChangeNumOpenSlotsData.h"
#include "PartyBeaconID.h"
#include "SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.generated.h"

class UObject;
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNumOpenSlotsCallback OnCallback;
    
    USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FChangeNumOpenSlotsData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(UObject* WorldContextObject, FPartyBeaconID BeaconID, int32 OpenSlots, float Timeout);
    
};

