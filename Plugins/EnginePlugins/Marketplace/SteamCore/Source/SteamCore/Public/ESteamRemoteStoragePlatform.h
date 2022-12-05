#pragma once
#include "CoreMinimal.h"
#include "ESteamRemoteStoragePlatform.generated.h"

UENUM(BlueprintType)
enum class ESteamRemoteStoragePlatform : uint8 {
    None,
    Windows,
    OSX,
    PS3 = 0x4,
    Linux = 0x8,
    Reserved2 = 0x10,
    All = 0xFE,
};

