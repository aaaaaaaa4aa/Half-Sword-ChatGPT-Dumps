#ifndef UE4SS_SDK_UI_CameraSettings_HPP
#define UE4SS_SDK_UI_CameraSettings_HPP

class UUI_CameraSettings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoverGame;                                                // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HoverLanguage;                                            // 0x02F0 (size: 0x8)
    class UWidgetAnimation* HoverBack;                                                // 0x02F8 (size: 0x8)
    class UWidgetAnimation* HoverAudio;                                               // 0x0300 (size: 0x8)
    class UWidgetAnimation* HoverControls;                                            // 0x0308 (size: 0x8)
    class UWidgetAnimation* HoverDisplay;                                             // 0x0310 (size: 0x8)
    class UButton* Audio_Button;                                                      // 0x0318 (size: 0x8)
    class UButton* BackButton_1;                                                      // 0x0320 (size: 0x8)
    class UButton* Button_3;                                                          // 0x0328 (size: 0x8)
    class UButton* Controls_Button;                                                   // 0x0330 (size: 0x8)
    class USlider* DamageNPC;                                                         // 0x0338 (size: 0x8)
    class USlider* DamageNPC_1;                                                       // 0x0340 (size: 0x8)
    class USlider* DamageNPC_2;                                                       // 0x0348 (size: 0x8)
    class USlider* DamageNPC_3;                                                       // 0x0350 (size: 0x8)
    class UButton* Display_Button;                                                    // 0x0358 (size: 0x8)
    class UButton* Game_Button;                                                       // 0x0360 (size: 0x8)
    class UButton* Game_Button_1;                                                     // 0x0368 (size: 0x8)
    class UImage* Image;                                                              // 0x0370 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0378 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0380 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_5;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x03A8 (size: 0x8)
    class UImage* Image_7;                                                            // 0x03B0 (size: 0x8)
    class UImage* Image_8;                                                            // 0x03B8 (size: 0x8)
    class UImage* Image_9;                                                            // 0x03C0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x03C8 (size: 0x8)
    class UImage* Image_11;                                                           // 0x03D0 (size: 0x8)
    class UImage* Image_12;                                                           // 0x03D8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x03E0 (size: 0x8)
    class UImage* Image_14;                                                           // 0x03E8 (size: 0x8)
    class UButton* Language_Button;                                                   // 0x03F0 (size: 0x8)
    class UImage* LeftDecorativeImage;                                                // 0x03F8 (size: 0x8)
    class UImage* LeftDecorativeImage_0;                                              // 0x0400 (size: 0x8)
    class UImage* RightDecorativeImage;                                               // 0x0408 (size: 0x8)
    class UImage* RightDecorativeImage_0;                                             // 0x0410 (size: 0x8)
    class USlider* Slider_DamagePlayer;                                               // 0x0418 (size: 0x8)
    class USlider* Slider_FOV;                                                        // 0x0420 (size: 0x8)
    class USlider* Slider_FOV_1;                                                      // 0x0428 (size: 0x8)
    class USlider* Slider_LockOnSlider;                                               // 0x0430 (size: 0x8)
    int32 GraphicsLevel;                                                              // 0x0438 (size: 0x4)
    int32 NewVar;                                                                     // 0x043C (size: 0x4)
    TSubclassOf<class UUserWidget> Go Back To;                                        // 0x0440 (size: 0x8)
    class UGI_Settings_C* GI Settings;                                                // 0x0448 (size: 0x8)
    class USG_Settings_C* SG_Settings;                                                // 0x0450 (size: 0x8)
    class AWillie_BP_C* My Master (Willie);                                           // 0x0458 (size: 0x8)

    float Get_Slider_FOV_1_Value();
    float Get_DamageNPC_3_Value();
    float Get_DamageNPC_2_Value();
    float Get_DamageNPC_1_Value();
    float Get_DamageNPC_Value();
    float Get_Slider_DamagePlayer_Value();
    float Get_Slider_FOV_Value();
    float Get_Slider_LockOnSlider_Value();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_Settings_Game_Button_27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Settings_Game_Slider_LockOnSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Settings_Game_Button_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Controls_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_BackButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Button_27_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Button_27_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_BackButton_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_BackButton_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Button_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Button_1_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Button_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Button_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Language_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Language_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_GameSettings_Language_Button_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Settings_AuVi_Slider_FOV_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CameraSettings_Slider_DamagePlayer_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CameraSettings_DamageNPC_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CameraSettings_DamageNPC_1_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CameraSettings_DamageNPC_2_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CameraSettings_DamageNPC_3_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_LanguageSettings_Game_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_LanguageSettings_Game_Button_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_LanguageSettings_Game_Button_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_CameraSettings_Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_CameraSettings_Slider_FOV_1_K2Node_ComponentBoundEvent_28_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CameraSettings_Button_3_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_CameraSettings(int32 EntryPoint);
}; // Size: 0x460

#endif
