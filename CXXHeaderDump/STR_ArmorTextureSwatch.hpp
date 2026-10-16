#ifndef UE4SS_SDK_STR_ArmorTextureSwatch_HPP
#define UE4SS_SDK_STR_ArmorTextureSwatch_HPP

struct FSTR_ArmorTextureSwatch
{
    TEnumAsByte<Enum_Ranks::Type> Rank_2_460C26A54576DB317A9026B2E617F7DC;            // 0x0000 (size: 0x1)
    TArray<TEnumAsByte<Steel_Type::Type>> SteelType_10_EDB2ECA54AFFE39B8EE2CABEE7F69485; // 0x0008 (size: 0x10)
    TArray<TEnumAsByte<SecondaryMetal_Type::Type>> SecondaryMetalType_14_F259D5434A20FB93767D9AA47EB7E4DD; // 0x0018 (size: 0x10)

}; // Size: 0x28

#endif
