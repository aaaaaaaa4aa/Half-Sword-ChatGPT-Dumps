#ifndef UE4SS_SDK_UI_DED_HPP
#define UE4SS_SDK_UI_DED_HPP

class UUI_DED_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* DethPicUnfade;                                            // 0x02E8 (size: 0x8)
    class UWidgetAnimation* RestartHover;                                             // 0x02F0 (size: 0x8)
    class UWidgetAnimation* RestartButtonAppear;                                      // 0x02F8 (size: 0x8)
    class UWidgetAnimation* TextAppear;                                               // 0x0300 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x0308 (size: 0x8)
    class UImage* Black;                                                              // 0x0310 (size: 0x8)
    class UButton* Button_Restart;                                                    // 0x0318 (size: 0x8)
    class UCanvasPanel* CanvasPanel_7;                                                // 0x0320 (size: 0x8)
    class UImage* DeathPic;                                                           // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_32;                                                   // 0x0330 (size: 0x8)
    class AWillie_BP_C* My Master (Willie);                                           // 0x0338 (size: 0x8)
    double Current Opacity;                                                           // 0x0340 (size: 0x8)
    bool Can Restart;                                                                 // 0x0348 (size: 0x1)
    class UGI_Settings_C* GI Settings;                                                // 0x0350 (size: 0x8)
    class ABP_HalfSwordGameMode_C* BP Half Sword Game Mode;                           // 0x0358 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0360 (size: 0x8)
    class USG_PlayerProgression_C* As SG Gauntlet Player Progress;                    // 0x0368 (size: 0x8)
    FString Dead Name;                                                                // 0x0370 (size: 0x10)

    FText GetText_0();
    FText GetText();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_DED_Button_155_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_DED_Button_155_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_DED_Button_155_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_DED(int32 EntryPoint);
}; // Size: 0x380

#endif
