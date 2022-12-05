#pragma once
#include "CoreMinimal.h"
#include "EPK_ModalConfirmAction.h"
#include "PK_OnModalConfirmActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPK_OnModalConfirmAction, TEnumAsByte<EPK_ModalConfirmAction>, ConfirmAction);

