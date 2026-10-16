#ifndef UE4SS_SDK_UI_Dialog_Widget_Seer_GoToHell_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Seer_GoToHell_HPP

class UUI_Dialog_Widget_Seer_GoToHell_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_2;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class USlider* Slider_5;                                                          // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_19;                                                   // 0x0308 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0310 (size: 0x8)

    FText GetText_1();
    float GetValue();
    ESlateVisibility GetVisibility_1();
    FText GetText_0();
    ESlateVisibility GetVisibility_0();
    FText GetText();
    void BndEvt__UI_Dialog_Widget_Seer_Greeting_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Welcome_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Dialog_Widget_Seer_GoToHell_Slider_5_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_UI_Dialog_Widget_Seer_GoToHell(int32 EntryPoint);
}; // Size: 0x318

#endif
