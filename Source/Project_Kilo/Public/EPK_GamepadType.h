#pragma once
#include "CoreMinimal.h"
#include "EPK_GamepadType.generated.h"

UENUM(BlueprintType)
enum EPK_GamepadType {
    Gamepad_Sony,
    Gamepad_Microsoft,
    Gamepad_MAX UMETA(Hidden),
};

