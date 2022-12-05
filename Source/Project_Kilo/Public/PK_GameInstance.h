#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UObject/NoExportTypes.h"
#include "EPK_GamepadType.h"
#include "EPK_BuildConfiguration.h"
#include "EPK_SaveTransferType.h"
#include "PK_GameInstance.generated.h"

class UObject;
class APlayerController;
class UPK_RootWidget;
class UPK_ProfileSave;
class UPK_SaveGame;

UCLASS(Blueprintable, NonTransient)
class UPK_GameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPK_SaveGame* ActiveGameSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPK_ProfileSave* ProfileSave;
    
public:
    UPK_GameInstance();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void UnlockAchievementEx(const UObject* WorldContextObject, FName AchievementID);
    
    UFUNCTION(BlueprintCallable)
    void StartActivity(FName ActivityId);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveGameSaveSlot(int32 InSaveSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveGameSave(UPK_SaveGame* InSaveGame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SaveProfile(const UObject* WorldContextObject, UPK_ProfileSave* InProfileSave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SaveGame(const UObject* WorldContextObject, UPK_SaveGame* InSaveGame);
    
protected:
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPK_SaveTransferType> SaveDataTransfer();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetInputMappings();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSubtitleSize();
    
    UFUNCTION(BlueprintCallable)
    void ProgressActivity(FName ActivityId, float Percent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameActivityActivation(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerConnectionChanged(bool bIsConnected, int32 PlatformUserId, int32 ControllerId);
    
public:
    UFUNCTION(BlueprintCallable)
    UPK_ProfileSave* LoadProfile();
    
    UFUNCTION(BlueprintCallable)
    UPK_SaveGame* LoadLatestSaveGame(int32& OutSaveSlot);
    
    UFUNCTION(BlueprintCallable)
    UPK_SaveGame* LoadGame(int32 SaveSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGameDefaultMap();
    
    UFUNCTION(BlueprintCallable)
    bool IsBuildDesktop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSavedGameAtSlot(int32 SaveSlot);
    
    UFUNCTION(BlueprintCallable)
    UPK_RootWidget* GetRootWidget(APlayerController* InPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentOSSLanguage() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPK_GamepadType> GetCurrentGamepadType();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPK_BuildConfiguration> GetBuildConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAssetsByClass(UClass* Class, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPK_ProfileSave* GetActiveProfileSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPK_SaveGame* GetActiveGameSave() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishActivity(FName ActivityId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyMotionBlurQualityAsScalability(int32 InNewLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyLoadedProfileSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyHardwareBenchmarkSettingsToProfile();
    
};

