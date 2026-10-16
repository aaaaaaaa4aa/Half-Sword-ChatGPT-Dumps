#ifndef UE4SS_SDK_BP_ItemPrices_HPP
#define UE4SS_SDK_BP_ItemPrices_HPP

class UBP_ItemPrices_C : public UObject
{
    TMap<TSubclassOf<UBP_GameItem_C>, int32> ItemPrices;                              // 0x0028 (size: 0x50)

}; // Size: 0x78

#endif
