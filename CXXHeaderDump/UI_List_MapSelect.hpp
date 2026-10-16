#ifndef UE4SS_SDK_UI_List_MapSelect_HPP
#define UE4SS_SDK_UI_List_MapSelect_HPP

class UUI_List_MapSelect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Background;                                                         // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image;                                                              // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0308 (size: 0x8)
    class UImage* Image_100;                                                          // 0x0310 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0318 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_6;                                                    // 0x0350 (size: 0x8)
    bool IsSelected;                                                                  // 0x0358 (size: 0x1)
    class UUI_Shop_C* Shop;                                                           // 0x0360 (size: 0x8)
    FColor OldColor;                                                                  // 0x0368 (size: 0x4)
    FColor SelectedColor;                                                             // 0x036C (size: 0x4)
    class UBP_GameItem_C* Item;                                                       // 0x0370 (size: 0x8)
    bool IsTraderWidget;                                                              // 0x0378 (size: 0x1)
    FText Scenario Name;                                                              // 0x0380 (size: 0x10)
    int32 Prize Amount;                                                               // 0x0390 (size: 0x4)
    TSoftObjectPtr<UWorld> Level;                                                     // 0x0398 (size: 0x28)
    int32 Rounds;                                                                     // 0x03C0 (size: 0x4)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x03C8 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x03D0 (size: 0x8)
    FName Level Name;                                                                 // 0x03D8 (size: 0x8)
    FStr_Passport_CombatEvent1 Passport;                                              // 0x03E0 (size: 0x48)
    int32 Reward Amount;                                                              // 0x0428 (size: 0x4)
    double Players Equipment Price;                                                   // 0x0430 (size: 0x8)

    FText GetText_2();
    FText GetText_1();
    FSlateBrush GetBrush_0();
    FSlateBrush GetBrush();
    FText GetText_0();
    FText Get_TextBlock_4_Text();
    FText Get_TextBlock_3_Text();
    FText Get_TextBlock_1_Text();
    FText Get_Name_Text();
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
    void BndEvt__UI_List_MapSelect_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_List_MapSelect_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_List_MapSelect(int32 EntryPoint);
}; // Size: 0x438

#endif
