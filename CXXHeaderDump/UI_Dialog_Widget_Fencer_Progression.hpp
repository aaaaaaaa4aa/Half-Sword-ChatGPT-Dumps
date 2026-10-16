#ifndef UE4SS_SDK_UI_Dialog_Widget_Fencer_Progression_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Fencer_Progression_HPP

class UUI_Dialog_Widget_Fencer_Progression_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F0 (size: 0x8)
    class UButton* Button_2;                                                          // 0x02F8 (size: 0x8)
    class UButton* Button_3;                                                          // 0x0300 (size: 0x8)
    class UButton* Button_5;                                                          // 0x0308 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0310 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0318 (size: 0x8)

    ESlateVisibility GetVisibility_1();
    FText GetText();
    ESlateVisibility GetVisibility_0();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_3_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_3_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_5_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_5_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Fencer_Progression_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Fencer_Progression_Button_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Fencer_Progression_Button_2_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Fencer_Progression_Button_2_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dialog_Widget_Fencer_Progression(int32 EntryPoint);
}; // Size: 0x320

#endif
