#ifndef UE4SS_SDK_Str_CurrentlyForgedWeapon_HPP
#define UE4SS_SDK_Str_CurrentlyForgedWeapon_HPP

struct FStr_CurrentlyForgedWeapon
{
    TSubclassOf<class UBP_GameWeapon_Customizable_Master_C> CustomizableModules_2_AB72AE81436F5DD49951E5823C431524; // 0x0000 (size: 0x8)
    int32 CurrentHeadInt_5_3F9164824C8B1ECE6504D9ABAF562195;                          // 0x0008 (size: 0x4)
    int32 CurrentHeadSub1Int_7_FED4F6AE440262D06B046CBE8346D833;                      // 0x000C (size: 0x4)
    int32 CurrentHeadSub2Int_9_0158F2434C920BF5B7F9B49951AEDC6B;                      // 0x0010 (size: 0x4)
    int32 CurrentGuardInt_11_C3F1D64D4EA863A29F0133A09146C0E8;                        // 0x0014 (size: 0x4)
    int32 CurrentGripInt_13_34B4F88D446B216086C59A93C33B38AF;                         // 0x0018 (size: 0x4)
    int32 CurrentPommelInt_15_CC6A1BE94DC18511063996914C272614;                       // 0x001C (size: 0x4)
    double HeadMassScale_18_1781F365442BEDEC256A11BC1FAF981A;                         // 0x0020 (size: 0x8)
    double GuardMassScale_20_085D3D034A025B6647DD4586361C0324;                        // 0x0028 (size: 0x8)
    double GripMassScale_22_2DE2403341406AB9B328B089B7E3D1D9;                         // 0x0030 (size: 0x8)
    double PommelMassScale_24_5C44BE0A4C8FB6E2D3A5A6A9E4D4403B;                       // 0x0038 (size: 0x8)
    double HeadScale_26_99B1203B410228133236ACA65C448E01;                             // 0x0040 (size: 0x8)
    double GuardScale_28_62CF8C814065AD4AD3017A8734F95272;                            // 0x0048 (size: 0x8)
    double GripScale_30_F98D25C84F13919AF62DC6AFAA480033;                             // 0x0050 (size: 0x8)
    double PommelScale_32_25F934A44ABA5731ED0B6BA7DB328ED6;                           // 0x0058 (size: 0x8)
    FLinearColor PickedColorLeather_35_13908E184DE7E4228C9C2B9CA88FD405;              // 0x0060 (size: 0x10)
    FLinearColor PickedColorWood_37_EA86C88E47141159FE5355BB669696F2;                 // 0x0070 (size: 0x10)
    TEnumAsByte<Enum_MaterialLayer::Type> CustomMaterialColoredMetal_40_5D2F4E4947D637F1B82E82ACB54B9A54; // 0x0080 (size: 0x1)

}; // Size: 0x81

#endif
