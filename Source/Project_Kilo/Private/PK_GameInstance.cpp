#include "PK_GameInstance.h"

class UObject;
class APlayerController;
class UPK_RootWidget;
class UPK_ProfileSave;
class UPK_SaveGame;

void UPK_GameInstance::UnlockAchievementEx(const UObject* WorldContextObject, FName AchievementID) {
}

void UPK_GameInstance::StartActivity(FName ActivityId) {
}

void UPK_GameInstance::SetActiveGameSaveSlot(int32 InSaveSlot) {
}

void UPK_GameInstance::SetActiveGameSave(UPK_SaveGame* InSaveGame) {
}

void UPK_GameInstance::SaveProfile(const UObject* WorldContextObject, UPK_ProfileSave* InProfileSave) {
}

void UPK_GameInstance::SaveGame(const UObject* WorldContextObject, UPK_SaveGame* InSaveGame) {
}

TEnumAsByte<EPK_SaveTransferType> UPK_GameInstance::SaveDataTransfer() {
    return SaveTransfer_Fail;
}

void UPK_GameInstance::ResetInputMappings() {
}

void UPK_GameInstance::RefreshSubtitleSize() {
}

void UPK_GameInstance::ProgressActivity(FName ActivityId, float Percent) {
}



UPK_ProfileSave* UPK_GameInstance::LoadProfile() {
    return NULL;
}

UPK_SaveGame* UPK_GameInstance::LoadLatestSaveGame(int32& OutSaveSlot) {
    return NULL;
}

UPK_SaveGame* UPK_GameInstance::LoadGame(int32 SaveSlot) {
    return NULL;
}

bool UPK_GameInstance::IsInGameDefaultMap() {
    return false;
}

bool UPK_GameInstance::IsBuildDesktop() {
    return false;
}

bool UPK_GameInstance::HasSavedGameAtSlot(int32 SaveSlot) {
    return false;
}

UPK_RootWidget* UPK_GameInstance::GetRootWidget(APlayerController* InPlayer) {
    return NULL;
}

FString UPK_GameInstance::GetCurrentOSSLanguage() const {
    return TEXT("");
}

TEnumAsByte<EPK_GamepadType> UPK_GameInstance::GetCurrentGamepadType() {
    return Gamepad_Sony;
}

TEnumAsByte<EPK_BuildConfiguration> UPK_GameInstance::GetBuildConfiguration() {
    return Debug;
}

bool UPK_GameInstance::GetAssetsByClass(UClass* Class, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses) const {
    return false;
}

UPK_ProfileSave* UPK_GameInstance::GetActiveProfileSave() const {
    return NULL;
}

UPK_SaveGame* UPK_GameInstance::GetActiveGameSave() const {
    return NULL;
}

void UPK_GameInstance::FinishActivity(FName ActivityId) {
}

void UPK_GameInstance::ApplyMotionBlurQualityAsScalability(int32 InNewLevel) {
}


void UPK_GameInstance::ApplyHardwareBenchmarkSettingsToProfile() {
}

UPK_GameInstance::UPK_GameInstance() {
    this->ActiveGameSave = NULL;
    this->ProfileSave = NULL;
}

