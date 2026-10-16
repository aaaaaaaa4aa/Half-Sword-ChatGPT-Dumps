#ifndef UE4SS_SDK_BP_Quiver_Master_HPP
#define UE4SS_SDK_BP_Quiver_Master_HPP

class ABP_Quiver_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    int32 Projectile Count;                                                           // 0x02A8 (size: 0x4)
    TSubclassOf<class ABP_Weapon_Ranged_Projectle_Bolt_1_C> Projectile Type;          // 0x02B0 (size: 0x8)
    class UStaticMesh* Projectile Mesh;                                               // 0x02B8 (size: 0x8)
    TArray<class UStaticMeshComponent*> Projectiles Array;                            // 0x02C0 (size: 0x10)

    void Rearrange Projectiles();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Quiver_Master(int32 EntryPoint);
}; // Size: 0x2D0

#endif
