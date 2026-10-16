#ifndef UE4SS_SDK_UI_DisplaySettings2_HPP
#define UE4SS_SDK_UI_DisplaySettings2_HPP

class UUI_DisplaySettings2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoverCamera;                                              // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HoverLanguage;                                            // 0x02F0 (size: 0x8)
    class UWidgetAnimation* HoverGraphics;                                            // 0x02F8 (size: 0x8)
    class UWidgetAnimation* HoverSave;                                                // 0x0300 (size: 0x8)
    class UWidgetAnimation* HoverBack;                                                // 0x0308 (size: 0x8)
    class UWidgetAnimation* HoverAudio;                                               // 0x0310 (size: 0x8)
    class UWidgetAnimation* HoverControls;                                            // 0x0318 (size: 0x8)
    class UWidgetAnimation* HoverGame;                                                // 0x0320 (size: 0x8)
    class UButton* AntiAliaDown;                                                      // 0x0328 (size: 0x8)
    class UButton* AntiAliaUp;                                                        // 0x0330 (size: 0x8)
    class UButton* AudioButton;                                                       // 0x0338 (size: 0x8)
    class UButton* BackButton;                                                        // 0x0340 (size: 0x8)
    class UTextBlock* ChangeFPS;                                                      // 0x0348 (size: 0x8)
    class UButton* ControlsButton;                                                    // 0x0350 (size: 0x8)
    class UButton* Displaybutton;                                                     // 0x0358 (size: 0x8)
    class UButton* DisplayDown;                                                       // 0x0360 (size: 0x8)
    class UTextBlock* DisplayMode;                                                    // 0x0368 (size: 0x8)
    class UTextBlock* DisplayMode_1;                                                  // 0x0370 (size: 0x8)
    class UTextBlock* DisplayMode_2;                                                  // 0x0378 (size: 0x8)
    class UButton* DisplayUp;                                                         // 0x0380 (size: 0x8)
    class UHorizontalBox* DLSS_Box;                                                   // 0x0388 (size: 0x8)
    class UButton* DLSSDOWN;                                                          // 0x0390 (size: 0x8)
    class UHorizontalBox* DLSSFG_Box;                                                 // 0x0398 (size: 0x8)
    class UButton* DLSSUP;                                                            // 0x03A0 (size: 0x8)
    class UButton* EffectsDown_1;                                                     // 0x03A8 (size: 0x8)
    class UButton* EffectsUp_1;                                                       // 0x03B0 (size: 0x8)
    class UButton* FGDOWN;                                                            // 0x03B8 (size: 0x8)
    class UButton* FGUP;                                                              // 0x03C0 (size: 0x8)
    class UButton* FoliageDown;                                                       // 0x03C8 (size: 0x8)
    class UButton* FoliageUp;                                                         // 0x03D0 (size: 0x8)
    class UButton* FPSDown;                                                           // 0x03D8 (size: 0x8)
    class UButton* FPSUp;                                                             // 0x03E0 (size: 0x8)
    class UHorizontalBox* FSR_Box;                                                    // 0x03E8 (size: 0x8)
    class UButton* FSRDOWN;                                                           // 0x03F0 (size: 0x8)
    class UButton* FSRUP;                                                             // 0x03F8 (size: 0x8)
    class UButton* Game_Button_1;                                                     // 0x0400 (size: 0x8)
    class UButton* GameButton;                                                        // 0x0408 (size: 0x8)
    class UButton* GraphicsDown;                                                      // 0x0410 (size: 0x8)
    class UButton* GraphicsUp;                                                        // 0x0418 (size: 0x8)
    class UImage* Image;                                                              // 0x0420 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0440 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0448 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0450 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0458 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0460 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0468 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0470 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0478 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0480 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0488 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0490 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0498 (size: 0x8)
    class UImage* Image_15;                                                           // 0x04A0 (size: 0x8)
    class UImage* Image_16;                                                           // 0x04A8 (size: 0x8)
    class UImage* Image_17;                                                           // 0x04B0 (size: 0x8)
    class UImage* Image_18;                                                           // 0x04B8 (size: 0x8)
    class UImage* Image_19;                                                           // 0x04C0 (size: 0x8)
    class UImage* Image_20;                                                           // 0x04C8 (size: 0x8)
    class UImage* Image_21;                                                           // 0x04D0 (size: 0x8)
    class UImage* Image_22;                                                           // 0x04D8 (size: 0x8)
    class UImage* Image_23;                                                           // 0x04E0 (size: 0x8)
    class UImage* Image_24;                                                           // 0x04E8 (size: 0x8)
    class UImage* Image_25;                                                           // 0x04F0 (size: 0x8)
    class UImage* Image_26;                                                           // 0x04F8 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0500 (size: 0x8)
    class UImage* Image_28;                                                           // 0x0508 (size: 0x8)
    class UImage* Image_29;                                                           // 0x0510 (size: 0x8)
    class UImage* Image_30;                                                           // 0x0518 (size: 0x8)
    class UImage* Image_31;                                                           // 0x0520 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0528 (size: 0x8)
    class UImage* Image_33;                                                           // 0x0530 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0538 (size: 0x8)
    class UImage* Image_35;                                                           // 0x0540 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0548 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0550 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0558 (size: 0x8)
    class UImage* Image_39;                                                           // 0x0560 (size: 0x8)
    class UImage* Image_40;                                                           // 0x0568 (size: 0x8)
    class UImage* Image_41;                                                           // 0x0570 (size: 0x8)
    class UImage* Image_42;                                                           // 0x0578 (size: 0x8)
    class UButton* LandscapeDown;                                                     // 0x0580 (size: 0x8)
    class UButton* LandscapeUp;                                                       // 0x0588 (size: 0x8)
    class UButton* Language_Button;                                                   // 0x0590 (size: 0x8)
    class UImage* LeftDecorativeImage_1;                                              // 0x0598 (size: 0x8)
    class UButton* LightingDown;                                                      // 0x05A0 (size: 0x8)
    class UButton* LightingUp;                                                        // 0x05A8 (size: 0x8)
    class UImage* OptionsPaper;                                                       // 0x05B0 (size: 0x8)
    class UButton* PostProcessDown;                                                   // 0x05B8 (size: 0x8)
    class UButton* PostProcessUp;                                                     // 0x05C0 (size: 0x8)
    class UButton* ReflexDOWN;                                                        // 0x05C8 (size: 0x8)
    class UTextBlock* ReflexTextBlock;                                                // 0x05D0 (size: 0x8)
    class UButton* ReflexUp;                                                          // 0x05D8 (size: 0x8)
    class UButton* ResDown;                                                           // 0x05E0 (size: 0x8)
    class UButton* ResUp;                                                             // 0x05E8 (size: 0x8)
    class UImage* RightDecorativeImage_1;                                             // 0x05F0 (size: 0x8)
    class UButton* SaveButton;                                                        // 0x05F8 (size: 0x8)
    class UButton* ShadingDown;                                                       // 0x0600 (size: 0x8)
    class UButton* ShadingUp;                                                         // 0x0608 (size: 0x8)
    class UButton* ShadowDown;                                                        // 0x0610 (size: 0x8)
    class UButton* ShadowUp;                                                          // 0x0618 (size: 0x8)
    class USlider* Slider_HUD;                                                        // 0x0620 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0628 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0630 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x0638 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x0640 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0648 (size: 0x8)
    class UTextBlock* TextBlock_12;                                                   // 0x0650 (size: 0x8)
    class UTextBlock* TextBlock_18;                                                   // 0x0658 (size: 0x8)
    class UTextBlock* TextBlock_19;                                                   // 0x0660 (size: 0x8)
    class UTextBlock* TextBlock_21;                                                   // 0x0668 (size: 0x8)
    class UTextBlock* TextBlock_22;                                                   // 0x0670 (size: 0x8)
    class UTextBlock* TextBlock_25;                                                   // 0x0678 (size: 0x8)
    class UTextBlock* TextBlock_27;                                                   // 0x0680 (size: 0x8)
    class UTextBlock* TextBlock_29;                                                   // 0x0688 (size: 0x8)
    class UTextBlock* TextBlock_32;                                                   // 0x0690 (size: 0x8)
    class UTextBlock* TextBlock_34;                                                   // 0x0698 (size: 0x8)
    class UTextBlock* TextRestartTheGame;                                             // 0x06A0 (size: 0x8)
    class UButton* TextureDown;                                                       // 0x06A8 (size: 0x8)
    class UButton* TextureUp;                                                         // 0x06B0 (size: 0x8)
    class UButton* UpscalerSelectorDOWN;                                              // 0x06B8 (size: 0x8)
    class UButton* UpscalerSelectorUP;                                                // 0x06C0 (size: 0x8)
    class UButton* VsyncDown;                                                         // 0x06C8 (size: 0x8)
    class UButton* VsyncDown_1;                                                       // 0x06D0 (size: 0x8)
    class UButton* VsyncUp;                                                           // 0x06D8 (size: 0x8)
    class UButton* VsyncUp_1;                                                         // 0x06E0 (size: 0x8)
    int32 GraphicsLevel;                                                              // 0x06E8 (size: 0x4)
    TSubclassOf<class UUserWidget> Go Back To;                                        // 0x06F0 (size: 0x8)
    class UGI_Settings_C* GI Settings;                                                // 0x06F8 (size: 0x8)
    bool VSync;                                                                       // 0x0700 (size: 0x1)
    float FrameRate;                                                                  // 0x0704 (size: 0x4)
    TEnumAsByte<EWindowMode::Type> In Fullscreen Mode;                                // 0x0708 (size: 0x1)
    int32 OverallGraphics;                                                            // 0x070C (size: 0x4)
    int32 TextureQ;                                                                   // 0x0710 (size: 0x4)
    int32 AntiAliasingQ;                                                              // 0x0714 (size: 0x4)
    int32 PostProcessQ;                                                               // 0x0718 (size: 0x4)
    int32 FoliageQ;                                                                   // 0x071C (size: 0x4)
    int32 ShadowQ;                                                                    // 0x0720 (size: 0x4)
    FIntPoint Resolution;                                                             // 0x0724 (size: 0x8)
    int32 ResIndex;                                                                   // 0x072C (size: 0x4)
    class UWidget* Target;                                                            // 0x0730 (size: 0x8)
    TSubclassOf<class UUserWidget> LastOpenedWidget;                                  // 0x0738 (size: 0x8)
    float Value;                                                                      // 0x0740 (size: 0x4)
    class USG_Settings_C* SG_Settings;                                                // 0x0748 (size: 0x8)
    TArray<FString> DLSSModes;                                                        // 0x0750 (size: 0x10)
    TArray<FString> DLSSFGModes;                                                      // 0x0760 (size: 0x10)
    int32 DLSSFGIndex;                                                                // 0x0770 (size: 0x4)
    int32 EffectsQ;                                                                   // 0x0774 (size: 0x4)
    EStreamlineReflexMode ReflexMode;                                                 // 0x0778 (size: 0x1)
    int32 ShadingQ;                                                                   // 0x077C (size: 0x4)
    int32 LandscapeQ;                                                                 // 0x0780 (size: 0x4)
    int32 LightingQ;                                                                  // 0x0784 (size: 0x4)
    TEnumAsByte<EUpscaler::Type> CurrentUpscaler;                                     // 0x0788 (size: 0x1)
    TEnumAsByte<EUpscalerMode::Type> CurrentUpscalerMode;                             // 0x0789 (size: 0x1)
    bool IsDLSSSupported;                                                             // 0x078A (size: 0x1)
    bool IsFSRSupported;                                                              // 0x078B (size: 0x1)

    ESlateVisibility Get_FSR_Box_Visibility();
    ESlateVisibility Get_DLSS_Box_Visibility();
    ESlateVisibility Get_DLSSFG_Box_Visibility();
    void NewFunction(int32& SettingToChange, bool& IsDown);
    void SwitchReflexMode();
    void LoadScalabilitySettingsFromSGSettings();
    void IsGraphicsCustom(bool& IsCustom);
    void SetAllScalabilitySettings();
    FText Get Upscaler Options();
    FText Get Reflex Options();
    FText Get_FGOptions();
    FText Get Upscaler Selector Options();
    FText GetEffectsOptions();
    FText GetLandscapeOptions();
    FText GetLightingOptions();
    FText GetShadingOptions();
    FText GetShadowOptions();
    FText GetLumenOptions();
    FText GetFoliageOptions();
    FText GetPostProcessOptions();
    FText GetAntiAliasingOptions();
    FText GetTextureOptions();
    void SetScreenPercentage();
    void SwitchFSRModes();
    void SwitchUpscalerMode();
    void SwitchDLSSFGModes(int32 NewMode);
    void SwitchDLSSModes();
    FText Get_DisplayMode_2_Text();
    void GetLastOpenedWidget();
    void SetLastOpenedWidget(TSubclassOf<class UUserWidget> UW);
    FText Get_Vsync();
    FText Get_Resolution();
    FText Get_WindowMode();
    FText Get_FPS();
    float Get_HUD();
    float Get_FOV();
    FText Get_Graphics();
    void BndEvt__UI_Controls_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_BackButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_BackButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_BackButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Button_1_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Button_1_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Button_2_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Button_2_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_BackButton_1_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_BackButton_1_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_DisplayDown_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_DisplayUp_1_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_GraphicsDown_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_GraphicsDown_4_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_GraphicsDown_5_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_GraphicsDown_6_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_GraphicsDown_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_GraphicsDown_2_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_BackButton_1_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Settings_UI_GraphicsDown_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Settings_UI_GraphicsUp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Slider_FOV_1_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_DisplaySettings_VsyncDown_1_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings_VsyncUp_1_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_DLSSUP_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_DLSSDOWN_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_FGDOWN_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_FGUP_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_TextureDown_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_TextureUp_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_AntiAliaDown_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_AntiAliaUp_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_PostProcessDown_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_PostProcessUp_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_FoliageDown_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_FoliageUp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_ShadowDown_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_ShadowUp_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_EffectsDown_1_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_EffectsUp_1_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_ReflexDOWN_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_ReflexUp_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_Language_Button_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_Language_Button_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_Language_Button_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_ShadingDown_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_ShadingUp_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_LandscapeDown_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_LandscapeUp_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_LightingDown_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_LightingUp_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__UI_Settings_AuVi_Button_1_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Game_Button_1_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Game_Button_1_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Game_Button_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_UpscalerSelectorDOWN_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_UpscalerSelectorUP_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_FSRUP_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_DisplaySettings2_FSRDOWN_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_DisplaySettings2(int32 EntryPoint);
}; // Size: 0x78C

#endif
