#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PK_CommonActivatableWidget.generated.h"

class UPK_CommonActivatableWidgetContainer;

UCLASS(Blueprintable, EditInlineNew)
class UPK_CommonActivatableWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPK_CommonActivatableWidgetContainer* ParentContainer;
    
public:
    UPK_CommonActivatableWidget();
};

