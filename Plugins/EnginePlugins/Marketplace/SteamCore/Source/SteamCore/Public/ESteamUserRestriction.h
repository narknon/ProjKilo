#pragma once
#include "CoreMinimal.h"
#include "ESteamUserRestriction.generated.h"

UENUM(BlueprintType)
enum class ESteamUserRestriction : uint8 {
    None,
    Unknown,
    AnyChat,
    VoiceChat = 0x4,
    GroupChat = 0x8,
    Rating = 0x10,
    GameInvites = 0x20,
    Trading = 0x40,
};

