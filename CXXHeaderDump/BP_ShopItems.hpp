#ifndef UE4SS_SDK_BP_ShopItems_HPP
#define UE4SS_SDK_BP_ShopItems_HPP

class UBP_ShopItems_C : public UObject
{
    TArray<class TSubclassOf<UBP_GameItem_C>> DefaultItems;                           // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
