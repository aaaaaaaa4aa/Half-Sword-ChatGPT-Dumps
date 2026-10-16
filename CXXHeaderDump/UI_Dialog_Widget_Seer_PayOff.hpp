#ifndef UE4SS_SDK_UI_Dialog_Widget_Seer_PayOff_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Seer_PayOff_HPP

class UUI_Dialog_Widget_Seer_PayOff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_3;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class USlider* Slider_5;                                                          // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_19;                                                   // 0x0310 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0318 (size: 0x8)
    int32 Amount of Souls;                                                            // 0x0320 (size: 0x4)
    TArray<FStr_Passport_Character1> Purged Opponents;                                // 0x0328 (size: 0x10)

    float GetValue();
    FText GetText_1();
    ESlateVisibility GetVisibility_1();
    FText GetText_0();
    ESlateVisibility GetVisibility_0();
    FText GetText();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Dialog_Widget_Merchant_Button_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Welcome_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Seer_Greeting_Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Seer_Greeting_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Seer_PayOff_Slider_5_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_UI_Dialog_Widget_Seer_PayOff(int32 EntryPoint);
}; // Size: 0x338

#endif
