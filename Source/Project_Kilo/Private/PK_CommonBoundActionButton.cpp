#include "PK_CommonBoundActionButton.h"


bool UPK_CommonBoundActionButton::HasValidAlternativeInputAction() {
    return false;
}

UPK_CommonBoundActionButton::UPK_CommonBoundActionButton() {
    this->Text_ActionName = NULL;
    this->AlternativeInputActionWidget = NULL;
}

