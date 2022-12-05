#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreInputType.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreInputType : uint8 {
    Unknown,
    SteamController,
    XBox360Controller,
    XBoxOneController,
    GenericGamepad,
    PS4Controller,
    AppleMFiController,
    AndroidController,
    SwitchJoyConPair,
    SwitchJoyConSingle,
    SwitchProController,
    MobileTouch,
    PS3Controller,
    Count,
    MaximumPossibleValue = 0xFF,
};

