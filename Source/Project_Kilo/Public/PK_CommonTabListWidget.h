#pragma once
#include "CoreMinimal.h"
#include "CommonTabListWidgetBase.h"
#include "PK_TabDescriptor.h"
#include "PK_CommonTabListWidget.generated.h"

class UCommonUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPK_CommonTabListWidget : public UCommonTabListWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabContentCreated, FName, TabId, UCommonUserWidget*, TabWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabContentCreated OnTabContentCreated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPK_TabDescriptor> PreregisteredTabInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPK_TabDescriptor> PendingTabLabelInfoMap;
    
public:
    UPK_CommonTabListWidget();
    UFUNCTION(BlueprintCallable)
    void SetTabHiddenState(FName TabNameID, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterDynamicTab(const FPK_TabDescriptor& TabDescriptor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabVisible(FName TabId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastTabActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstTabActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisibleTabCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreregisteredTabInfo(const FName TabNameID, FPK_TabDescriptor& OutTabInfo);
    
};

