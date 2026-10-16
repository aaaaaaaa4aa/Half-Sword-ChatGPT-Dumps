#ifndef UE4SS_SDK_Weapon_Forge_BP_HPP
#define UE4SS_SDK_Weapon_Forge_BP_HPP

class AWeapon_Forge_BP_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Indicator_Gauntlet_R_Default;                         // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Indicator_Gauntlet_L_Default;                         // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Indicator_Gauntlet_R_Alt;                             // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Indicator_Gauntlet_L_Alt;                             // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Wedge;                                                // 0x0348 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0350 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0358 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0360 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0368 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0370 (size: 0x8)
    class UChildActorComponent* ForgedWeapon;                                         // 0x0378 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0380 (size: 0x8)
    TSubclassOf<class UBP_GameWeapon_Customizable_Master_C> Customizable Modules;     // 0x0388 (size: 0x8)
    class AModularWeaponBP_Customizable_C* Customized Weapon;                         // 0x0390 (size: 0x8)
    int32 Current Head Module Int;                                                    // 0x0398 (size: 0x4)
    int32 Current Head Sub Module 1 Int;                                              // 0x039C (size: 0x4)
    int32 Current Head Sub Module 2 Int;                                              // 0x03A0 (size: 0x4)
    int32 Current Guard Module Int;                                                   // 0x03A4 (size: 0x4)
    int32 Current Grip Module Int;                                                    // 0x03A8 (size: 0x4)
    int32 Current Pommel Module Int;                                                  // 0x03AC (size: 0x4)
    FVector Head Size;                                                                // 0x03B0 (size: 0x18)
    FVector Guard Size;                                                               // 0x03C8 (size: 0x18)
    FVector Grip Size;                                                                // 0x03E0 (size: 0x18)
    FVector Pommel Size;                                                              // 0x03F8 (size: 0x18)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Head;                       // 0x0410 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Guard;                      // 0x0411 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Grip;                       // 0x0412 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Pommel;                     // 0x0413 (size: 0x1)
    FLinearColor Custom Color Head;                                                   // 0x0414 (size: 0x10)
    FLinearColor Custom Color Guard;                                                  // 0x0424 (size: 0x10)
    FLinearColor Custom Color Grip;                                                   // 0x0434 (size: 0x10)
    FLinearColor Custom Color Pommel;                                                 // 0x0444 (size: 0x10)
    double Custom Mass Scale Head;                                                    // 0x0458 (size: 0x8)
    double Custom Mass Scale Guard;                                                   // 0x0460 (size: 0x8)
    double Custom Mass Scale Grip;                                                    // 0x0468 (size: 0x8)
    double Custom Mass Scale Pommel;                                                  // 0x0470 (size: 0x8)
    TEnumAsByte<Enum_Weapon_Customization_Type::Type> Customization Type;             // 0x0478 (size: 0x1)
    bool NewVar;                                                                      // 0x0479 (size: 0x1)
    class UWidget* My UI;                                                             // 0x0480 (size: 0x8)

    void Hide Alt Grip();
    void Show Alt Grip();
    void Hide Default Grip();
    void Show Default Grip();
    void Refresh Weapon(bool Reset Position);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Move Camera Event();
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossessed(class AController* NewController);
    void ReceiveUnpossessed(class AController* OldController);
    void ExecuteUbergraph_Weapon_Forge_BP(int32 EntryPoint);
}; // Size: 0x488

#endif
