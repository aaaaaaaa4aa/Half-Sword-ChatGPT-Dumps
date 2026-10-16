#ifndef UE4SS_SDK_BP_ArmorActor_HPP
#define UE4SS_SDK_BP_ArmorActor_HPP

class ABP_ArmorActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* Armor Mesh Skeletal;                                // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    TSubclassOf<class UBP_GameArmor_C> GameArmorParts;                                // 0x02A8 (size: 0x8)
    TEnumAsByte<ArmorSlots_Enum::Type> ArmorSlot;                                     // 0x02B0 (size: 0x1)
    class UPrimitiveComponent* Armor Mesh;                                            // 0x02B8 (size: 0x8)
    TArray<class USkeletalMesh*> AllSkeletalMeshes;                                   // 0x02C0 (size: 0x10)
    class UBP_GameArmor_C* GameArmorRef;                                              // 0x02D0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ArmorActor(int32 EntryPoint);
}; // Size: 0x2D8

#endif
