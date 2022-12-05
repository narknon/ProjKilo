#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CommonActivatableWidget.h"
#include "PK_RootWidget.generated.h"

class UCommonActivatableWidgetStack;

UCLASS(Blueprintable, EditInlineNew)
class UPK_RootWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetStack* FullScreenStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetStack* MenuStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetStack* ModalStack;
    
public:
    UPK_RootWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubtitles();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSaveGameProgress();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidgetFromModalStack(UCommonActivatableWidget* WidgetToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidgetFromMenuStack(UCommonActivatableWidget* WidgetToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidgetFromFullScreenStack(UCommonActivatableWidget* WidgetToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshSubtitleSize();
    
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* PushWidgetToModalStack(TSubclassOf<UCommonActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* PushWidgetToMenuStack(TSubclassOf<UCommonActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* PushWidgetToFullScreenStack(TSubclassOf<UCommonActivatableWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSubtitles();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSaveGameProgress();
    
};

