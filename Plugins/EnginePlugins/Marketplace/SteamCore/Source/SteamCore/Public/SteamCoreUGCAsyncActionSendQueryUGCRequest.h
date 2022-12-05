#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnSendQueryUGCRequestAsyncDelegateDelegate.h"
#include "UGCQueryHandle.h"
#include "SteamUGCQueryCompleted.h"
#include "SteamCoreUGCAsyncActionSendQueryUGCRequest.generated.h"

class UObject;
class USteamCoreUGCAsyncActionSendQueryUGCRequest;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSendQueryUGCRequestAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionSendQueryUGCRequest();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
    
};

