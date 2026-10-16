#ifndef UE4SS_SDK_Constraint_Zero_HPP
#define UE4SS_SDK_Constraint_Zero_HPP

class AConstraint_Zero_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0298 (size: 0x8)
    class UPrimitiveComponent* Component 1;                                           // 0x02A0 (size: 0x8)
    class UPrimitiveComponent* Component 2;                                           // 0x02A8 (size: 0x8)
    FName Bone Name 1;                                                                // 0x02B0 (size: 0x8)
    FName Bone Name 2;                                                                // 0x02B8 (size: 0x8)
    double Destroy Distance;                                                          // 0x02C0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Destroy Self();
    void ExecuteUbergraph_Constraint_Zero(int32 EntryPoint);
}; // Size: 0x2C8

#endif
