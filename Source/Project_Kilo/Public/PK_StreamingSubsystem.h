#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PK_StreamingSubsystem.generated.h"

UCLASS(Blueprintable)
class UPK_StreamingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPK_StreamingSubsystem();
};

