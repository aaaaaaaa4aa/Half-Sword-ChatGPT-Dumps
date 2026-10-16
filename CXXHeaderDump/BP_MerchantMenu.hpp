#ifndef UE4SS_SDK_BP_MerchantMenu_HPP
#define UE4SS_SDK_BP_MerchantMenu_HPP

class ABP_MerchantMenu_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    class AWillie_BP_C* Willie_Doll_Ref;                                              // 0x0298 (size: 0x8)
    bool IsMenuActive;                                                                // 0x02A0 (size: 0x1)
    class ACameraActor* MainMenuCamera;                                               // 0x02A8 (size: 0x8)
    class ABP_PlayerInventory_C* PlayerInventory_Ref;                                 // 0x02B0 (size: 0x8)
    class UUserWidget* UIWidget;                                                      // 0x02B8 (size: 0x8)
    TSubclassOf<class UBP_ShopItems_C> ShopItems;                                     // 0x02C0 (size: 0x8)

    void CloseMenu();
    void OpenMenu();
}; // Size: 0x2C8

#endif
