#ifndef UE4SS_SDK_UI_Pause_Eng_HPP
#define UE4SS_SDK_UI_Pause_Eng_HPP

class UUI_Pause_Eng_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoverRestart;                                             // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HoverToMenu;                                              // 0x02F0 (size: 0x8)
    class UWidgetAnimation* HoverToDesktop;                                           // 0x02F8 (size: 0x8)
    class UWidgetAnimation* HoverQuit;                                                // 0x0300 (size: 0x8)
    class UWidgetAnimation* HoverSettings;                                            // 0x0308 (size: 0x8)
    class UWidgetAnimation* HoverContinue;                                            // 0x0310 (size: 0x8)
    class UButton* ButtonContinue;                                                    // 0x0318 (size: 0x8)
    class UButton* ButtonContinue_1;                                                  // 0x0320 (size: 0x8)
    class UButton* ButtonQit;                                                         // 0x0328 (size: 0x8)
    class UButton* ButtonQit_1;                                                       // 0x0330 (size: 0x8)
    class UButton* ButtonRestart;                                                     // 0x0338 (size: 0x8)
    class UButton* ButtonRestart_1;                                                   // 0x0340 (size: 0x8)
    class UButton* ButtonSettings;                                                    // 0x0348 (size: 0x8)
    class UButton* ButtonSettings_1;                                                  // 0x0350 (size: 0x8)
    class UButton* Desktop;                                                           // 0x0358 (size: 0x8)
    class UButton* Desktop_1;                                                         // 0x0360 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0368 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0370 (size: 0x8)
    class UButton* Menu;                                                              // 0x0378 (size: 0x8)
    class UButton* Menu_1;                                                            // 0x0380 (size: 0x8)
    class UTextBlock* ProgressLostText;                                               // 0x0388 (size: 0x8)
    class UHorizontalBox* QuitBox;                                                    // 0x0390 (size: 0x8)
    class UHorizontalBox* QuitBox_Japanese;                                           // 0x0398 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x03A0 (size: 0x8)
    TSubclassOf<class UUserWidget> LastOpenedWidget;                                  // 0x03A8 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x03B0 (size: 0x8)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x03B8 (size: 0x8)
    class USG_PlayerProgression_C* As SG Gauntlet Player Progress;                    // 0x03C0 (size: 0x8)

    FText GetText_0();
    FText GetText();
    FText Get_ProgressLostText_Text();
    void SetLastOpenedWidget(TSubclassOf<class UUserWidget> UW);
    void GetLastOpenedWidget();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Pause_UI_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Pause_UI_ButtonSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonContinue_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_Menu_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Pause_Desktop_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonQit_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonQit_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonSettings_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonContinue_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonQit_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_Desktop_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_Menu_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_Menu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_Desktop_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonQit_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonQit_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Pause_ButtonQit_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Pause_Eng(int32 EntryPoint);
}; // Size: 0x3C8

#endif
