#include "Input.h"

void UInput::TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed) {
}

void UInput::TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags) {
}

void UInput::TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec) {
}

ESteamCoreInputActionOrigin UInput::TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin) {
    return ESteamCoreInputActionOrigin::None;
}

void UInput::StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction) {
}

bool UInput::Shutdown() {
    return false;
}

bool UInput::ShowBindingPanel(FInputHandle Handle) {
    return false;
}

void UInput::SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreInputLEDFlag Flags) {
}

bool UInput::Init() {
    return false;
}

FString UInput::GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin) {
    return TEXT("");
}

FString UInput::GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin) {
    return TEXT("");
}

int32 UInput::GetRemotePlaySessionID(FInputHandle Handle) {
    return 0;
}

FInputMotionData UInput::GetMotionData(FInputHandle Handle) {
    return FInputMotionData{};
}

ESteamCoreInputType UInput::GetInputTypeForHandle(FInputHandle Handle) {
    return ESteamCoreInputType::Unknown;
}

FString UInput::GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin) {
    return TEXT("");
}

FString UInput::GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin) {
    return TEXT("");
}

int32 UInput::GetGamepadIndexForController(FInputHandle Handle) {
    return 0;
}

int32 UInput::GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut) {
    return 0;
}

FInputDigitalActionHandle UInput::GetDigitalActionHandle(const FString& PszActionName) {
    return FInputDigitalActionHandle{};
}

FInputDigitalActionData UInput::GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle) {
    return FInputDigitalActionData{};
}

bool UInput::GetDeviceBindingRevision(FInputHandle Handle, int32& Major, int32& Minor) {
    return false;
}

FInputActionSetHandle UInput::GetCurrentActionSet(FInputHandle Handle) {
    return FInputActionSetHandle{};
}

FInputHandle UInput::GetControllerForGamepadIndex(int32 Index) {
    return FInputHandle{};
}

int32 UInput::GetConnectedControllers(TArray<FInputHandle>& OutHandles) {
    return 0;
}

int32 UInput::GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut) {
    return 0;
}

FInputAnalogActionHandle UInput::GetAnalogActionHandle(const FString& PszActionName) {
    return FInputAnalogActionHandle{};
}

FInputAnalogActionData UInput::GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle) {
    return FInputAnalogActionData{};
}

int32 UInput::GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data) {
    return 0;
}

FInputActionSetHandle UInput::GetActionSetHandle(const FString& ActionSetName) {
    return FInputActionSetHandle{};
}

ESteamCoreInputActionOrigin UInput::GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin) {
    return ESteamCoreInputActionOrigin::None;
}

void UInput::DeactivateAllActionSetLayers(FInputHandle Handle) {
}

void UInput::DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle) {
}

void UInput::ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle) {
}

void UInput::ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle) {
}

UInput::UInput() {
}

