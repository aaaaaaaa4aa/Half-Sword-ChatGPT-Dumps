#ifndef UE4SS_SDK_EngineUserSettings_HPP
#define UE4SS_SDK_EngineUserSettings_HPP

#include "EngineUserSettings_enums.hpp"

class UEngineUserSettingsBPLibrary : public UBlueprintFunctionLibrary
{

    void SetPreferredRHI(EGraphicsRHI GraphicsRHI);
    void SetPreferredFeatureLevel(EShaderFormat ShaderFormat);
    void SetGameUserSettingsIniValue(FString Section, FString Key, FString Value);
    EGraphicsRHI GetPreferredRHI();
    EShaderFormat GetPreferredFeatureLevel();
    EShaderFormat GetMaxFeatureLevel();
    EGraphicsRHI GetCurrentRHI();
    EShaderFormat GetCurrentFeatureLevel();
}; // Size: 0x28

#endif
