#ifndef UE4SS_SDK_UI_Dialog_Widget_Armorsmith_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Armorsmith_HPP

class UUI_Dialog_Widget_Armorsmith_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_4;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Dialog_Widget_Armorsmith_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Armorsmith_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Armorsmith_Button_4_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Armorsmith_Button_4_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dialog_Widget_Armorsmith(int32 EntryPoint);
}; // Size: 0x300

#endif
