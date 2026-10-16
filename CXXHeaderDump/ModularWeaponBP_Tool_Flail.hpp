#ifndef UE4SS_SDK_ModularWeaponBP_Tool_Flail_HPP
#define UE4SS_SDK_ModularWeaponBP_Tool_Flail_HPP

class AModularWeaponBP_Tool_Flail_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class USceneComponent* Tip1;                                                      // 0x0C00 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0C08 (size: 0x8)
    class USceneComponent* Base1_0;                                                   // 0x0C10 (size: 0x8)
    class USceneComponent* Base1_1;                                                   // 0x0C18 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0C20 (size: 0x8)
    class USceneComponent* Tip2;                                                      // 0x0C28 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ModularWeaponBP_Tool_Flail(int32 EntryPoint);
}; // Size: 0xC30

#endif
