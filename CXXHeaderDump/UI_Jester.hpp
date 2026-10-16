#ifndef UE4SS_SDK_UI_Jester_HPP
#define UE4SS_SDK_UI_Jester_HPP

class UUI_Jester_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* ScrollDownPulse;                                          // 0x02E8 (size: 0x8)
    class UButton* Button;                                                            // 0x02F0 (size: 0x8)
    class UButton* Button_4;                                                          // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0318 (size: 0x8)
    class UListView* ListView_89;                                                     // 0x0320 (size: 0x8)
    class USlider* Slider_1;                                                          // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0338 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0340 (size: 0x8)
    double Players Equipment Price;                                                   // 0x0348 (size: 0x8)

    ESlateVisibility GetVisibility_3();
    FSlateBrush GetBrush_0();
    FSlateBrush GetBrush();
    float GetValue();
    ESlateVisibility GetVisibility_2();
    FText GetText_0();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility GetVisibility_0();
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Jester_ListView_89_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__UI_Jester_ListView_89_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_Jester_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Jester_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Jester_ListView_89_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
    void BndEvt__UI_Jester_Button_4_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Jester_Button_4_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_UI_Jester(int32 EntryPoint);
}; // Size: 0x350

#endif
