#include "SteamCoreSettings.h"

USteamCoreSettings::USteamCoreSettings() {
    this->bEnabled = true;
    this->bRelaunchInSteam = false;
    this->bVACEnabled = true;
    this->bAllowP2PPacketRelay = true;
    this->P2PConnectionTimeout = 90;
    this->SteamAppId = 480;
    this->SteamDevAppId = 480;
    this->Port = 7777;
    this->GameServerQueryPort = 27015;
    this->GameVersion = TEXT("1.0.0.0");
}

