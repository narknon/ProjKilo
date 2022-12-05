#include "PK_RootWidget.h"
#include "Templates/SubclassOf.h"

class UCommonActivatableWidget;



void UPK_RootWidget::RemoveWidgetFromModalStack(UCommonActivatableWidget* WidgetToRemove) {
}

void UPK_RootWidget::RemoveWidgetFromMenuStack(UCommonActivatableWidget* WidgetToRemove) {
}

void UPK_RootWidget::RemoveWidgetFromFullScreenStack(UCommonActivatableWidget* WidgetToRemove) {
}


UCommonActivatableWidget* UPK_RootWidget::PushWidgetToModalStack(TSubclassOf<UCommonActivatableWidget> WidgetClass) {
    return NULL;
}

UCommonActivatableWidget* UPK_RootWidget::PushWidgetToMenuStack(TSubclassOf<UCommonActivatableWidget> WidgetClass) {
    return NULL;
}

UCommonActivatableWidget* UPK_RootWidget::PushWidgetToFullScreenStack(TSubclassOf<UCommonActivatableWidget> WidgetClass) {
    return NULL;
}



UPK_RootWidget::UPK_RootWidget() {
    this->FullScreenStack = NULL;
    this->MenuStack = NULL;
    this->ModalStack = NULL;
}

