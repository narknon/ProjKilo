#include "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.h"

class UObject;
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries;

void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::HandleCallback(const FLeaderboardScoresDownloaded& Data, bool bWasSuccessful) {
}

USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32 RangeStart, int32 RangeEnd, float Timeout) {
    return NULL;
}

USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries() {
}

