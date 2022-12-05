#include "PK_CommonBoundActionBar.h"

UPK_CommonBoundActionBar::UPK_CommonBoundActionBar(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->ActionButtonClass = NULL;
    this->bDisplayOwningPlayerActionsOnly = true;
}

