#ifndef UE4SS_SDK_BP_GameArmor_HPP
#define UE4SS_SDK_BP_GameArmor_HPP

class UBP_GameArmor_C : public UBP_GameItem_C
{
    TArray<class UBP_GameArmor_C*> CurrentPieces;                                     // 0x0068 (size: 0x10)
    TArray<class TSubclassOf<ABP_Armor_Master_C>> ArmorParts;                         // 0x0078 (size: 0x10)
    class UBP_GameArmor_C* AttachedTo;                                                // 0x0088 (size: 0x8)
    TSubclassOf<class ABP_Armor_Master_C> SkeletalMesh;                               // 0x0090 (size: 0x8)
    TEnumAsByte<ArmorSlots_Enum::Type> ArmorSlot;                                     // 0x0098 (size: 0x1)
    TSubclassOf<class UBP_GameArmor_C> AvailableAttachment;                           // 0x00A0 (size: 0x8)
    bool HasFirstAttachment;                                                          // 0x00A8 (size: 0x1)
    bool HasSecondAttachment;                                                         // 0x00A9 (size: 0x1)
    bool HasThirdAttachment;                                                          // 0x00AA (size: 0x1)
    class UBP_GameArmor_C* FirstAttachment;                                           // 0x00B0 (size: 0x8)
    class UBP_GameArmor_C* SecondAttachment;                                          // 0x00B8 (size: 0x8)
    class UBP_GameArmor_C* ThirdAttachment;                                           // 0x00C0 (size: 0x8)

    void Initialize();
}; // Size: 0xC8

#endif
