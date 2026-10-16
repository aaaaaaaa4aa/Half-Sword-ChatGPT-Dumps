#ifndef UE4SS_SDK_Modular_Weapon_Part_Master_HPP
#define UE4SS_SDK_Modular_Weapon_Part_Master_HPP

class AModular_Weapon_Part_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Scabbard;                                             // 0x0298 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x02A0 (size: 0x8)
    class USceneComponent* BaseSk;                                                    // 0x02A8 (size: 0x8)
    class USceneComponent* TipSk;                                                     // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02C8 (size: 0x8)
    class USceneComponent* base;                                                      // 0x02D0 (size: 0x8)
    class USceneComponent* Tip;                                                       // 0x02D8 (size: 0x8)
    double Rigidity;                                                                  // 0x02E0 (size: 0x8)
    int32 Color Group;                                                                // 0x02E8 (size: 0x4)
    FVector Scale;                                                                    // 0x02F0 (size: 0x18)
    TEnumAsByte<Enum_MaterialLayer::Type> Master Material;                            // 0x0308 (size: 0x1)
    class UTexture* Normal Texture;                                                   // 0x0310 (size: 0x8)
    FLinearColor Tint;                                                                // 0x0318 (size: 0x10)
    double Def Rating;                                                                // 0x0328 (size: 0x8)
    double Stab Rating;                                                               // 0x0330 (size: 0x8)
    TArray<TEnumAsByte<Enum_MaterialLayer::Type>> Materials Array;                    // 0x0338 (size: 0x10)
    class UMaterialInstanceDynamic* Dynamic Material;                                 // 0x0348 (size: 0x8)
    bool Complex Material;                                                            // 0x0350 (size: 0x1)
    TSubclassOf<class AModular_Weapon_Module_C> SubModule 1;                          // 0x0358 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> SubModule 2;                          // 0x0360 (size: 0x8)
    bool Affect Sound;                                                                // 0x0368 (size: 0x1)
    int32 Sound Int;                                                                  // 0x036C (size: 0x4)
    double Sound Pitch;                                                               // 0x0370 (size: 0x8)
    double Sound Threshold;                                                           // 0x0378 (size: 0x8)
    bool Set Scabbard;                                                                // 0x0380 (size: 0x1)
    class UTexture* Icon;                                                             // 0x0388 (size: 0x8)
    bool Affects Icon;                                                                // 0x0390 (size: 0x1)
    TEnumAsByte<Enum_Weapon_Material_Type::Type> Material Type;                       // 0x0391 (size: 0x1)
    TEnumAsByte<Enum_MaterialQuality::Type> Quality;                                  // 0x0392 (size: 0x1)
    bool Custom Element;                                                              // 0x0393 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material;                            // 0x0394 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Steel;                      // 0x0395 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Colored Metal;              // 0x0396 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Colored Wood;               // 0x0397 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Colored Leather;            // 0x0398 (size: 0x1)
    FLinearColor Custom Color Wood;                                                   // 0x039C (size: 0x10)
    FLinearColor Custom Color Leather;                                                // 0x03AC (size: 0x10)
    FVector Custom Scale;                                                             // 0x03C0 (size: 0x18)
    double Custom Mass Scale;                                                         // 0x03D8 (size: 0x8)
    double Price;                                                                     // 0x03E0 (size: 0x8)
    TEnumAsByte<Enum_Ranks::Type> Module Tier;                                        // 0x03E8 (size: 0x1)
    double Use Alt Against Armor Rate NPC;                                            // 0x03F0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Modular_Weapon_Part_Master(int32 EntryPoint);
}; // Size: 0x3F8

#endif
