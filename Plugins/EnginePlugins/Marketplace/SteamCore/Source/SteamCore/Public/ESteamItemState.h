#pragma once
#include "CoreMinimal.h"
#include "ESteamItemState.generated.h"

UENUM(BlueprintType)
enum class ESteamItemState : uint8 {
    None,
    Subscribed,
    LegacyItem,
    Installed = 0x4,
    NeedsUpdate = 0x8,
    Downloading = 0x10,
    DownloadPending = 0x20,
};

