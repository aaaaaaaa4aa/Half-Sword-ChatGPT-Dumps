#ifndef UE4SS_SDK_BP_Weapon_Ranged_Weapon_Master_HPP
#define UE4SS_SDK_BP_Weapon_Ranged_Weapon_Master_HPP

class ABP_Weapon_Ranged_Weapon_Master_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class UStaticMeshComponent* Hand_Representation;                                  // 0x0C00 (size: 0x8)
    class UStaticMeshComponent* Bolt_Representation;                                  // 0x0C08 (size: 0x8)
    class ABP_Weapon_Ranged_Projectle_Master_C* Loaded Ammo;                          // 0x0C10 (size: 0x8)
    class UPhysicsHandleComponent* Bolt Representation Handle;                        // 0x0C18 (size: 0x8)
    class UPhysicsConstraintComponent* Bolt Hand Constraint;                          // 0x0C20 (size: 0x8)
    FVector2D Bolt Representation Default Position;                                   // 0x0C28 (size: 0x10)

    void UserConstructionScript();
    void Release Bolt Representation(FVector2D NewParam);
    void Grab Bolt Representation();
    void Event Set Bolt Representation Default Position(FVector2D Bolt Representation Default Position);
    void ExecuteUbergraph_BP_Weapon_Ranged_Weapon_Master(int32 EntryPoint);
}; // Size: 0xC38

#endif
