#ifndef UE4SS_SDK_UI_Tevern_LowerPanel_HPP
#define UE4SS_SDK_UI_Tevern_LowerPanel_HPP

class UUI_Tevern_LowerPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_Inventory;                                                  // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_Banner_Low;                                                   // 0x02F8 (size: 0x8)
    class UImage* Image_Time;                                                         // 0x0300 (size: 0x8)
    class UTextBlock* Text_Date;                                                      // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_86;                                                   // 0x0310 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0318 (size: 0x8)

    ESlateVisibility Get_Image_Time_Visibility();
    FSlateBrush Get_Image_Time_Brush();
    FText Get_Text_Date_Text();
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Tevern_LowerPanel_Button_Inventory_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Tevern_LowerPanel_Button_Inventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Tevern_LowerPanel(int32 EntryPoint);
}; // Size: 0x320

#endif
