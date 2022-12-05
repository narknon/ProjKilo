#include "PK_CommonTabListWidget.h"

void UPK_CommonTabListWidget::SetTabHiddenState(FName TabNameID, bool bHidden) {
}

bool UPK_CommonTabListWidget::RegisterDynamicTab(const FPK_TabDescriptor& TabDescriptor) {
    return false;
}

bool UPK_CommonTabListWidget::IsTabVisible(FName TabId) {
    return false;
}

bool UPK_CommonTabListWidget::IsLastTabActive() const {
    return false;
}

bool UPK_CommonTabListWidget::IsFirstTabActive() const {
    return false;
}

int32 UPK_CommonTabListWidget::GetVisibleTabCount() {
    return 0;
}

bool UPK_CommonTabListWidget::GetPreregisteredTabInfo(const FName TabNameID, FPK_TabDescriptor& OutTabInfo) {
    return false;
}

UPK_CommonTabListWidget::UPK_CommonTabListWidget() {
}

