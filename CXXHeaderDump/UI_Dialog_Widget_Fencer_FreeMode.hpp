#ifndef UE4SS_SDK_UI_Dialog_Widget_Fencer_FreeMode_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Fencer_FreeMode_HPP

class UUI_Dialog_Widget_Fencer_FreeMode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0300 (size: 0x8)

    ESlateVisibility GetVisibility_1();
    FText GetText();
    ESlateVisibility GetVisibility_0();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Dialog_Widget_Fencer_Progression_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Fencer_Progression_Button_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dialog_Widget_Fencer_FreeMode(int32 EntryPoint);
}; // Size: 0x308

#endif
