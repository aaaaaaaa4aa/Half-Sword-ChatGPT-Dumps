#ifndef UE4SS_SDK_BP_PlayerInventory_HPP
#define UE4SS_SDK_BP_PlayerInventory_HPP

class ABP_PlayerInventory_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TArray<class UBP_GameItem_C*> OwnedItems;                                         // 0x02A0 (size: 0x10)
    bool Load From Save;                                                              // 0x02B0 (size: 0x1)
    int32 TotalMoney;                                                                 // 0x02B4 (size: 0x4)

    void LoadSaveGame();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PlayerInventory(int32 EntryPoint);
}; // Size: 0x2B8

#endif
