#pragma once
#include "CoreMinimal.h"
#include "ESteamChatMemberStateChange.generated.h"

UENUM(BlueprintType)
enum class ESteamChatMemberStateChange : uint8 {
    None,
    Entered,
    Left,
    Disconnected = 0x4,
    Kicked = 0x8,
    Banned = 0x10,
};

