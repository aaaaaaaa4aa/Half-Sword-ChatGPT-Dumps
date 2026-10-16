#ifndef UE4SS_SDK_UI_Dialog_Widget_Merchant_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Merchant_HPP

class UUI_Dialog_Widget_Merchant_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_2;                                                          // 0x02E8 (size: 0x8)
    class UButton* Button_3;                                                          // 0x02F0 (size: 0x8)
    class UButton* Button_4;                                                          // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Dialog_Widget_Merchant_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_4_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dialog_Widget_Merchant(int32 EntryPoint);
}; // Size: 0x308

#endif
