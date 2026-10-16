#ifndef UE4SS_SDK_BP_Weapon_Ranged_Weapon_Crossbow_Light_HPP
#define UE4SS_SDK_BP_Weapon_Ranged_Weapon_Crossbow_Light_HPP

class ABP_Weapon_Ranged_Weapon_Crossbow_Light_C : public ABP_Weapon_Ranged_Weapon_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C38 (size: 0x8)
    class UStaticMeshComponent* CM_Peg_Helper_Cube;                                   // 0x0C40 (size: 0x8)
    class USceneComponent* Scene_Cross_Ange;                                          // 0x0C48 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0C50 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Border_Left2;                                 // 0x0C58 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Border_Left1;                                 // 0x0C60 (size: 0x8)
    class UAudioComponent* Sounds_Rope;                                               // 0x0C68 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint_Peg_Stock;                   // 0x0C70 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint_Peg_Shoulder_R;              // 0x0C78 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint_Peg_Shoulder_L;              // 0x0C80 (size: 0x8)
    class USceneComponent* Scene_Location_Peg_Loaded;                                 // 0x0C88 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0C90 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Holder;                                       // 0x0C98 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Border_Bottom;                                // 0x0CA0 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Border_Right;                                 // 0x0CA8 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Border_Left;                                  // 0x0CB0 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint_Shoulder_R;                  // 0x0CB8 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Shoulder_R;                                   // 0x0CC0 (size: 0x8)
    class USceneComponent* Scene_0;                                                   // 0x0CC8 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Peg;                                          // 0x0CD0 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint_Shoulder_L;                  // 0x0CD8 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Shoulder_L;                                   // 0x0CE0 (size: 0x8)
    class UStaticMeshComponent* CM_Test_Stock;                                        // 0x0CE8 (size: 0x8)
    double String Stretch Pointer Position Z;                                         // 0x0CF0 (size: 0x8)
    double String Z Position;                                                         // 0x0CF8 (size: 0x8)
    bool String Loaded;                                                               // 0x0D00 (size: 0x1)
    bool Bolt Loaded;                                                                 // 0x0D01 (size: 0x1)
    class UPhysicsConstraintComponent* Holder Constraint;                             // 0x0D08 (size: 0x8)
    double NewVar_0_0;                                                                // 0x0D10 (size: 0x8)
    double String Velocity;                                                           // 0x0D18 (size: 0x8)
    bool Shooting;                                                                    // 0x0D20 (size: 0x1)
    double L Shoulder Motion;                                                         // 0x0D28 (size: 0x8)
    double R Shoulder Motion;                                                         // 0x0D30 (size: 0x8)
    bool String Grabbed;                                                              // 0x0D38 (size: 0x1)
    bool Start Loaded;                                                                // 0x0D39 (size: 0x1)
    double NewVar_5_0;                                                                // 0x0D40 (size: 0x8)

    void UserConstructionScript();
    void Event Shoot();
    void Event String Grabbed();
    void Event String Released();
    void Event Load Bolt();
    void Event Add Bolt();
    void Release Bolt Representation(FVector2D NewParam);
    void Forget Loaded Bolt();
    void Event Return Bolt to Quiver();
    void Event Quiver Minus Bolt();
    void Event Add Bolt From Hand();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Event Make Bolt Temporily Undetachable();
    void Set Weapon Damping Pick Up();
    void Event Spawn Sound Detector(double Sound);
    void ExecuteUbergraph_BP_Weapon_Ranged_Weapon_Crossbow_Light(int32 EntryPoint);
}; // Size: 0xD48

#endif
