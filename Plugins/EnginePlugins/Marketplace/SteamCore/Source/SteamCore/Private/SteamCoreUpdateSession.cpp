#include "SteamCoreUpdateSession.h"

class UObject;
class USteamCoreUpdateSession;

USteamCoreUpdateSession* USteamCoreUpdateSession::UpdateSteamCoreSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> Settings, const FString& SessionName, int32 MaxPlayers) {
    return NULL;
}

void USteamCoreUpdateSession::OnCompleted(FName SessionName, bool bWasSuccessful) {
}

USteamCoreUpdateSession::USteamCoreUpdateSession() {
}

