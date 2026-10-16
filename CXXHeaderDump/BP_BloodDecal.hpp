#ifndef UE4SS_SDK_BP_BloodDecal_HPP
#define UE4SS_SDK_BP_BloodDecal_HPP

class ABP_BloodDecal_C : public ADecalActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x02A0 (size: 0x8)
    class UMaterialInstanceDynamic* BloodDecalMaterialRef;                            // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BloodDecal(int32 EntryPoint);
}; // Size: 0x2B0

#endif
