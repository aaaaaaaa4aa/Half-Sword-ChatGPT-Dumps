#ifndef UE4SS_SDK_UI_Dialog_Widget_Innkeeper_NoMoney_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Innkeeper_NoMoney_HPP

class UUI_Dialog_Widget_Innkeeper_NoMoney_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_2;                                                          // 0x02E8 (size: 0x8)
    class UButton* Button_3;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0300 (size: 0x8)

    void BndEvt__UI_Dialog_Widget_Innkeeper_Errand_Barrel_Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Merchant_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Dialog_Widget_Innkeeper_NoMoney(int32 EntryPoint);
}; // Size: 0x308

#endif
