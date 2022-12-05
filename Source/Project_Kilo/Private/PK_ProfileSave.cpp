#include "PK_ProfileSave.h"

UPK_ProfileSave::UPK_ProfileSave() {
    this->Audio_MasterVolume = 1.00f;
    this->Audio_MusicVolume = 1.00f;
    this->Audio_DialogueVolume = 1.00f;
    this->Audio_SoundEffectsVolume = 1.00f;
    this->Audio_OutputProfile = 0;
    this->Audio_EnableSubtitles = true;
    this->Audio_SubtitleSize = 1;
    this->Input_SensitivityX = 2.00f;
    this->Input_SensitivityY = 2.00f;
    this->Input_InvertX = false;
    this->Input_InvertY = false;
    this->Input_DisableHaptics = false;
    this->Video_WindowedMode = EWindowMode::Fullscreen;
    this->Video_FrameLimit = 120;
    this->Video_VerticalSync = false;
    this->Video_DynamicResolution = false;
    this->Video_ResolutionScale = 100.00f;
    this->Video_TextureQuality = 0;
    this->Video_ShadowQuality = 0;
    this->Video_EffectsQuality = 0;
    this->Video_AntiAliasingQuality = 0;
    this->Video_FoliageQuality = 0;
    this->Video_ViewDistanceQuality = 0;
    this->Video_PostProcessQuality = 0;
    this->Video_MotionBlurQuality = 0;
    this->Video_FOV = 106;
    this->bCompletedGame = false;
}

