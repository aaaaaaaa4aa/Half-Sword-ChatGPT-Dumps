#ifndef UE4SS_SDK_Str_WeaponParts_HPP
#define UE4SS_SDK_Str_WeaponParts_HPP

struct FStr_WeaponParts
{
    TSubclassOf<class AModularWeaponBP_C> WeaponBPClass_51_5C40F9BE43F7897FB12AACA75C2AD066; // 0x0000 (size: 0x8)
    class UStaticMesh* GripMesh_39_EDA3307B485303C5BF981B82D8462D0A;                  // 0x0008 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Grip_C> GripModule_38_15B14C3F4E9701389A9B35A3B0909867; // 0x0010 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> HeadModule_19_B043442745EED9AD1BE7929F0A06DB8F; // 0x0018 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> GuardModule_21_774015784EB0300D2671C894D57ED144; // 0x0020 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> PommelModule_22_4F6D0ABC4AA88CF780EE1C9649F96984; // 0x0028 (size: 0x8)
    FVector HeadSize_23_5DF30AE0493E534BD92D5B95E31E13CA;                             // 0x0030 (size: 0x18)
    FVector GuardSize_24_7EB9BB3F4B7B54DD51CE529FEEA9A98D;                            // 0x0048 (size: 0x18)
    FVector PommelPommelSize_26_5B37388746A83FCB7A7833891C1C5524;                     // 0x0060 (size: 0x18)
    TSubclassOf<class AModular_Weapon_Module_C> HeadSubModule1_66_EA08538346D6DADCE01E8B8B7B50A9A0; // 0x0078 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> HeadSubModule2_67_491313E24CE70DD60B5A6D88ED4B5980; // 0x0080 (size: 0x8)
    TMap<TEnumAsByte<Enum_Weapon_Material_Type::Type>, TEnumAsByte<Enum_MaterialLayer::Type>> MemberVar_40_43_0B501E224AC2292FC03A999C237C2C81; // 0x0088 (size: 0x50)
    TMap<TEnumAsByte<Enum_Weapon_Material_Type::Type>, FLinearColor> MemberVar_44_45_FF627FBE4FE882E7D295BFA0BB6716C0; // 0x00D8 (size: 0x50)
    int32 COAInt_63_593665BE4EF020F95F7D1A92564C1239;                                 // 0x0128 (size: 0x4)

}; // Size: 0x12C

#endif
