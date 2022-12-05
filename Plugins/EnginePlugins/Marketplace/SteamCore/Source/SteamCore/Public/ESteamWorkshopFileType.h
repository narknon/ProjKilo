#pragma once
#include "CoreMinimal.h"
#include "ESteamWorkshopFileType.generated.h"

UENUM(BlueprintType)
enum class ESteamWorkshopFileType : uint8 {
    First,
    Community = 0x0,
    Microtransaction,
    Collection,
    Art,
    Video,
    Screenshot,
    Game,
    Software,
    Concept,
    WebGuide,
    IntegratedGuide,
    Merch,
    ControllerBinding,
    SteamworksAccessInvite,
    SteamVideo,
    GameManagedItem,
    Max,
};

