#ifndef UE4SS_SDK_UI_Dialog_Widget_Innkeeper_PlayerJustDied_HPP
#define UE4SS_SDK_UI_Dialog_Widget_Innkeeper_PlayerJustDied_HPP

class UUI_Dialog_Widget_Innkeeper_PlayerJustDied_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x02F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Welcome_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Dialog_Widget_Innkeeper_Welcome_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dialog_Widget_Innkeeper_PlayerJustDied(int32 EntryPoint);
}; // Size: 0x300

#endif
