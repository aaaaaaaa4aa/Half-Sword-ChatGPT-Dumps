#ifndef UE4SS_SDK_BP_GameItem_HPP
#define UE4SS_SDK_BP_GameItem_HPP

class UBP_GameItem_C : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    FString Description;                                                              // 0x0038 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0048 (size: 0x8)
    bool IsEquipped;                                                                  // 0x0050 (size: 0x1)
    bool CanBeEquiped;                                                                // 0x0051 (size: 0x1)
    TSubclassOf<class AActor> Actor to Spawn;                                         // 0x0058 (size: 0x8)
    double Price;                                                                     // 0x0060 (size: 0x8)

    void Initialize();
}; // Size: 0x68

#endif
