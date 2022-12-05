#include "SteamCoreWebSettings.h"

USteamCoreWebSettings::USteamCoreWebSettings() {
    this->AsyncTaskTimeout = 15.00f;
    this->DisabledSubsystems = 0;
    this->bDebugging = true;
    this->bDevMode = false;
    this->AppID = 1730590;
    this->DevSteamID = TEXT("1730590");
    this->bSandboxMode = false;
}

