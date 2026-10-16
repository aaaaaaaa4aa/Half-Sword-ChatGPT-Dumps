#ifndef UE4SS_SDK_SG_Equipment_HPP
#define UE4SS_SDK_SG_Equipment_HPP

class USG_Equipment_C : public USaveGame
{
    FStr_ArmorElements Armor Colors;                                                  // 0x0028 (size: 0x38)
    FStr_Loadout_Equipment Equipment Struct;                                          // 0x0060 (size: 0x8A0)
    int32 Rank;                                                                       // 0x0900 (size: 0x4)
    int32 Team;                                                                       // 0x0904 (size: 0x4)
    TArray<FSG_ArmorSaveStruct> SavedArmor;                                           // 0x0908 (size: 0x10)

}; // Size: 0x918

#endif
