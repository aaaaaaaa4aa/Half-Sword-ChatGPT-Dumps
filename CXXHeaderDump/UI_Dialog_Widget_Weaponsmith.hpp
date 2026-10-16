#ifndef UE4SS_SDK_UI_Dialog_Widget_Weaponsmith_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Weaponsmith_HPP

class UUI_Dialog_Widget_Weaponsmith_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02E8 (size: 0x8)
    class UButton* Button_4;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Dialog_Widget_Weaponsmith_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Weaponsmith_Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Weaponsmith_Button_4_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Weaponsmith_Button_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dialog_Widget_Weaponsmith(int32 EntryPoint);
}; // Size: 0x300

#endif
