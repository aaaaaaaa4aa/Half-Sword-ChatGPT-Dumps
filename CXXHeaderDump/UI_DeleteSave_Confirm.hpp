#ifndef UE4SS_SDK_UI_DeleteSave_Confirm_HPP
#define UE4SS_SDK_UI_DeleteSave_Confirm_HPP

class UUI_DeleteSave_Confirm_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Back;                                                               // 0x02E8 (size: 0x8)
    class UButton* Button;                                                            // 0x02F0 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F8 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0300 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Mercenaries_Expired_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_DeleteSave_Confirm(int32 EntryPoint);
}; // Size: 0x308

#endif
