#pragma once
#include "CoreMinimal.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "PK_CommonActivatableWidgetContainer.generated.h"

UCLASS(Blueprintable)
class UPK_CommonActivatableWidgetContainer : public UCommonActivatableWidgetStack {
    GENERATED_BODY()
public:
    UPK_CommonActivatableWidgetContainer();
};

