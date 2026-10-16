#ifndef UE4SS_SDK_BP_Constraint_Bite_HPP
#define UE4SS_SDK_BP_Constraint_Bite_HPP

class ABP_Constraint_Bite_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* Meat_Cue;                                                  // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    class AActor* Bitten Actor;                                                       // 0x02A8 (size: 0x8)
    class UPrimitiveComponent* Bitten Component;                                      // 0x02B0 (size: 0x8)
    FName Bitten Bone;                                                                // 0x02B8 (size: 0x8)
    class UPrimitiveComponent* Bitter Component;                                      // 0x02C0 (size: 0x8)
    class UPhysicsConstraintComponent* Constraint;                                    // 0x02C8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Constraint_Bite(int32 EntryPoint);
}; // Size: 0x2D0

#endif
