#ifndef UE4SS_SDK_UI_Jester_FreeMode_HPP
#define UE4SS_SDK_UI_Jester_FreeMode_HPP

class UUI_Jester_FreeMode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x02F8 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x0300 (size: 0x8)
    class UCheckBox* CheckBox_1;                                                      // 0x0308 (size: 0x8)
    class UCheckBox* CheckBox_2;                                                      // 0x0310 (size: 0x8)
    class UImage* Image;                                                              // 0x0318 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0350 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0358 (size: 0x8)
    class USlider* Slider;                                                            // 0x0360 (size: 0x8)
    class USlider* Slider_1;                                                          // 0x0368 (size: 0x8)
    class USlider* Slider_2;                                                          // 0x0370 (size: 0x8)
    class USlider* Slider_3;                                                          // 0x0378 (size: 0x8)
    class USlider* Slider_4;                                                          // 0x0380 (size: 0x8)
    class USlider* Slider_5;                                                          // 0x0388 (size: 0x8)
    class USlider* Slider_6;                                                          // 0x0390 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0398 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x03A0 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x03A8 (size: 0x8)
    class UTextBlock* TextBlock_6;                                                    // 0x03B0 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x03B8 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x03C0 (size: 0x8)
    class UTextBlock* TextBlock_92;                                                   // 0x03C8 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x03D0 (size: 0x8)

    ECheckBoxState GetCheckedState_2();
    FText GetText_7();
    FText GetText_6();
    FText GetText_5();
    ECheckBoxState GetCheckedState_1();
    FText GetText_4();
    FText GetText_3();
    ECheckBoxState GetCheckedState_0();
    ECheckBoxState GetCheckedState();
    FText GetText_2();
    FText GetText_1();
    ESlateVisibility GetVisibility_2();
    FText GetText_0();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility GetVisibility_0();
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Jester_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Jester_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Jester_FreeMode_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Jester_FreeMode_Slider_6_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Jester_FreeMode_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Jester_FreeMode_CheckBox_0_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__UI_Jester_FreeMode_Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__UI_Jester_FreeMode_CheckBox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__UI_Jester_FreeMode_Slider_1_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Jester_FreeMode_Slider_2_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Jester_FreeMode_CheckBox_1_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__UI_Jester_FreeMode_Slider_3_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Jester_FreeMode_Slider_4_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Jester_FreeMode_Slider_5_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_Jester_FreeMode_CheckBox_2_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_UI_Jester_FreeMode(int32 EntryPoint);
}; // Size: 0x3D8

#endif
