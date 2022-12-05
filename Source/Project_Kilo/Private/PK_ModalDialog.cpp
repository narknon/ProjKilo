#include "PK_ModalDialog.h"

void UPK_ModalDialog::SetModalText(const FText& InText) {
}

void UPK_ModalDialog::SetModalConfirmOnly(bool bInConfirmOnly) {
}

UPK_ModalDialog::UPK_ModalDialog() {
    this->bCloseOnConfirmation = true;
    this->bConfirmOnly = false;
    this->ActionBar = NULL;
}

