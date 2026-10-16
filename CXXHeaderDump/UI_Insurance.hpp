#ifndef UE4SS_SDK_UI_Insurance_HPP
#define UE4SS_SDK_UI_Insurance_HPP

class UUI_Insurance_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UListView* Player_Items_List;                                               // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0308 (size: 0x8)
    class UListView* Trader_Items_List;                                               // 0x0310 (size: 0x8)
    TSubclassOf<class UBP_ItemPrices_C> ItemPrices;                                   // 0x0318 (size: 0x8)
    class AMerchantTable_BP_C* My MerchantTable;                                      // 0x0320 (size: 0x8)
    class AActor* Currently Spawned Item;                                             // 0x0328 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0330 (size: 0x8)
    FStr_Inventory Items to Insure;                                                   // 0x0338 (size: 0x20)

    FText GetText();
    void Spawn Hovered Item(class UObject* Object);
    void Set Up Trader Item(class UObject* Item, class UObject* Widget, bool Trader);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Shop_Frank_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Shop_Frank_Trader_Items_List_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_Shop_Frank_Trader_Items_List_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__UI_Shop_Frank_Trader_Items_List_K2Node_ComponentBoundEvent_4_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
    void BndEvt__UI_Shop_Frank_Player_Items_List_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_Shop_Frank_Player_Items_List_K2Node_ComponentBoundEvent_7_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
    void BndEvt__UI_Shop_Frank_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Insurance(int32 EntryPoint);
}; // Size: 0x358

#endif
