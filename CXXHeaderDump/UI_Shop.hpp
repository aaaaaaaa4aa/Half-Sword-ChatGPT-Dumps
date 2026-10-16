#ifndef UE4SS_SDK_UI_Shop_HPP
#define UE4SS_SDK_UI_Shop_HPP

class UUI_Shop_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Btn_ConfirmTrade;                                                  // 0x02E8 (size: 0x8)
    class UButton* CloseButton;                                                       // 0x02F0 (size: 0x8)
    class UListView* Player_Items_List;                                               // 0x02F8 (size: 0x8)
    class UImage* PlayerIcon;                                                         // 0x0300 (size: 0x8)
    class UImage* Ref_background;                                                     // 0x0308 (size: 0x8)
    class UListView* Trader_Items_List;                                               // 0x0310 (size: 0x8)
    class UImage* TraderIcon;                                                         // 0x0318 (size: 0x8)
    class UTextBlock* Txt_PlayerMoney;                                                // 0x0320 (size: 0x8)
    class UTextBlock* Txt_TotalPrice;                                                 // 0x0328 (size: 0x8)
    class UTextBlock* Txt_TraderMoney;                                                // 0x0330 (size: 0x8)
    TSubclassOf<class UBP_ShopItems_C> ShopItems;                                     // 0x0338 (size: 0x8)
    int32 TotalPrice;                                                                 // 0x0340 (size: 0x4)
    TSubclassOf<class UBP_ItemPrices_C> ItemPrices;                                   // 0x0348 (size: 0x8)
    TArray<class UBP_GameItem_C*> ItemsSelectedToBuy;                                 // 0x0350 (size: 0x10)
    TArray<class UBP_GameItem_C*> ItemsSelectedToSell;                                // 0x0360 (size: 0x10)
    class ABP_PlayerInventory_C* PlayerInventory;                                     // 0x0370 (size: 0x8)
    TArray<class UWidget*> WidgetsSelectedToBuy;                                      // 0x0378 (size: 0x10)
    FColor PlayerWidgetSelectedColor;                                                 // 0x0388 (size: 0x4)
    FColor TraderWidgetSelectedColor;                                                 // 0x038C (size: 0x4)
    TArray<class UWidget*> WidgetsSelectedToSell;                                     // 0x0390 (size: 0x10)
    bool WillPayMoney;                                                                // 0x03A0 (size: 0x1)
    int32 ShopMoney;                                                                  // 0x03A4 (size: 0x4)
    int32 ShopReputation;                                                             // 0x03A8 (size: 0x4)
    class ABP_MerchantMenu_C* MerchantMenu;                                           // 0x03B0 (size: 0x8)

    void GetItemPrice(class UBP_GameItem_C* Item, int32& Price);
    void ConfirmTrade();
    void RefreshMoneyText();
    void RefreshTotalPrice();
    void RemoveItem(class UBP_GameItem_C* Item, class UWidget* Widget);
    void AddItem(class UBP_GameItem_C* Item, class UWidget* Widget, bool TraderItem);
    void RefreshItemsList();
    void DoInitializeEntry(class UObject* Item, class UUserWidget* Widget, bool IsTrader);
    void InitializeItemsList(TSubclassOf<class UBP_ShopItems_C> Items);
    void BndEvt__UI_Shop_Trader_Items_List_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_Shop_Btn_ConfirmTrade_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Shop_Player_Items_List_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_Shop_CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_UI_Shop(int32 EntryPoint);
}; // Size: 0x3B8

#endif
