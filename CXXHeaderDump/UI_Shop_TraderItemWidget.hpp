#ifndef UE4SS_SDK_UI_Shop_TraderItemWidget_HPP
#define UE4SS_SDK_UI_Shop_TraderItemWidget_HPP

class UUI_Shop_TraderItemWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Back;                                                               // 0x02E8 (size: 0x8)
    class UButton* Clickable_Btn;                                                     // 0x02F0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UTextBlock* ItemCost;                                                       // 0x0308 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* ItemWeight;                                                     // 0x0318 (size: 0x8)
    bool IsSelected;                                                                  // 0x0320 (size: 0x1)
    class UUI_Shop_C* Shop;                                                           // 0x0328 (size: 0x8)
    FColor OldColor;                                                                  // 0x0330 (size: 0x4)
    FColor SelectedColor;                                                             // 0x0334 (size: 0x4)
    class UBP_GameItem_C* Item;                                                       // 0x0338 (size: 0x8)
    bool IsTraderWidget;                                                              // 0x0340 (size: 0x1)
    bool Insured;                                                                     // 0x0341 (size: 0x1)
    bool Hell Item;                                                                   // 0x0342 (size: 0x1)
    bool Is Character;                                                                // 0x0343 (size: 0x1)

    FText Get_ItemWeight_Text();
    ESlateVisibility Get_ItemWeight_Visibility();
    FLinearColor Get_Back_ColorAndOpacity();
    void Deselect();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
    void BndEvt__UI_Shop_TraderItemWidget_Clickable_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Shop_TraderItemWidget_Clickable_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Shop_TraderItemWidget_Clickable_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Shop_TraderItemWidget(int32 EntryPoint);
}; // Size: 0x344

#endif
