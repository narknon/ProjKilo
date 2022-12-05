#include "SteamCoreMatchmakingServersAsyncActionServerRules.h"

class UObject;
class USteamCoreMatchmakingServersAsyncActionServerRules;

USteamCoreMatchmakingServersAsyncActionServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(UObject* WorldContextObject, const FString& IP, int32 QueryPort, float Timeout) {
    return NULL;
}

void USteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful) {
}

USteamCoreMatchmakingServersAsyncActionServerRules::USteamCoreMatchmakingServersAsyncActionServerRules() {
}

