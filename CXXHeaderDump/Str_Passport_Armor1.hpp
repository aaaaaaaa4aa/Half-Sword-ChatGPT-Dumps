#ifndef UE4SS_SDK_Str_Passport_Armor1_HPP
#define UE4SS_SDK_Str_Passport_Armor1_HPP

struct FStr_Passport_Armor1
{
    TSubclassOf<class ABP_Armor_Modular_Core_Master_C> ArmorCore_3_F6B7C69C4BD7D9720DB91EB635EE2B43; // 0x0000 (size: 0x8)
    int32 ID_54_C6BBB1A64A3828B5AB1D8E804EC7C8F7;                                     // 0x0008 (size: 0x4)
    bool CoreRemoved_12_5CFF8F6D4A05C15812594CAF6771C66B;                             // 0x000C (size: 0x1)
    int32 Module1_5_46B7198E4341C93CBF6AE989EF9898E4;                                 // 0x0010 (size: 0x4)
    int32 Module2_7_5B7940B84CFD673B25103D96E0AFEEB0;                                 // 0x0014 (size: 0x4)
    int32 Module3_9_E282C465414F6D4EF2A8039FBA847AD2;                                 // 0x0018 (size: 0x4)
    FLinearColor BackgroundColor_58_CD7AE55B4C46E5A79F8448BB9CDB3B82;                 // 0x001C (size: 0x10)
    FLinearColor LeatherColor_67_A8A17E654ED0341E58247C9B39D29597;                    // 0x002C (size: 0x10)
    FLinearColor FabricColor1_15_4C7C24744C4F50FFAFB62DB50DE29393;                    // 0x003C (size: 0x10)
    FLinearColor FabricColor2_17_4199336A482894E5BC99E69E52B50B1C;                    // 0x004C (size: 0x10)
    FLinearColor FabricColor3_89_167D399343950DE18CC2F9AC76D99042;                    // 0x005C (size: 0x10)
    TEnumAsByte<Steel_Type::Type> SteelType_84_7BA6626740476C2CD69648847A1E592F;      // 0x006C (size: 0x1)
    TEnumAsByte<SecondaryMetal_Type::Type> MetalPiecesType_81_203BFD454D41FA24B0B5C5838898AA60; // 0x006D (size: 0x1)
    bool RustToggle_73_E4F1415F4A1E7AD75CAFD68BBA632FEF;                              // 0x006E (size: 0x1)
    bool DirtToggle_74_A166ACBE4A95555CCA980F98495E364A;                              // 0x006F (size: 0x1)
    double Price_27_8E3ADD54484EFC4A59FE9381485AC192;                                 // 0x0070 (size: 0x8)
    TEnumAsByte<ArmorSlots_Enum::Type> Slot_30_7561CB484566A4512003EA96ED44F88D;      // 0x0078 (size: 0x1)
    bool ProvidesUpperAP_34_A85C3E3B4E4EF35DA44FFA960797B6C6;                         // 0x0079 (size: 0x1)
    bool ProvidesLowerAP_36_FFA5916240E32AC30239D58BCDD69D62;                         // 0x007A (size: 0x1)
    bool RequiresUpperAP_38_079BBCD74D92FB832584E8B776EC8A6E;                         // 0x007B (size: 0x1)
    bool RequiresLowerAP_40_BF13845C4B210380A7A569A912A6F614;                         // 0x007C (size: 0x1)
    TMap<TEnumAsByte<ArmorSlots_Enum::Type>, bool> SlotsBlocked_45_0807340240E57ACE5A59D39F5E998F51; // 0x0080 (size: 0x50)
    bool RequiresModuleHirarchy_47_9ED58E2C48514BE5153606977BE68B6A;                  // 0x00D0 (size: 0x1)
    TEnumAsByte<Enum_Ranks::Type> Tier_50_E497AE434B01B84C559DEE8A863BB42E;           // 0x00D1 (size: 0x1)

}; // Size: 0xD2

#endif
