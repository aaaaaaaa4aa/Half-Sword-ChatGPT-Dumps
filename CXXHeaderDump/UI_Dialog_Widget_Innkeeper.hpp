#ifndef UE4SS_SDK_UI_Dialog_Widget_Innkeeper_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Innkeeper_HPP

class UUI_Dialog_Widget_Innkeeper_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F8 (size: 0x8)
    class UButton* Button_2;                                                          // 0x0300 (size: 0x8)
    class UButton* Button_3;                                                          // 0x0308 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0318 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0320 (size: 0x8)

    ESlateVisibility GetVisibility_1();
    FText GetText();
    ESlateVisibility GetVisibility_0();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_2_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void Propose Errand Event();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_3_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_3_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dialog_Widget_Innkeeper(int32 EntryPoint);
}; // Size: 0x328

#endif
