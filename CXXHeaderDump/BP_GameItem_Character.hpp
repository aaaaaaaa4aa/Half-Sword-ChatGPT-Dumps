#ifndef UE4SS_SDK_BP_GameItem_Character_HPP
#define UE4SS_SDK_BP_GameItem_Character_HPP

class UBP_GameItem_Character_C : public UBP_GameItem_C
{
    FStr_Passport_Character1 Character Passport;                                      // 0x0068 (size: 0x140)
    TSubclassOf<class AWillie_BP_C> Spawned Character;                                // 0x01A8 (size: 0x8)

    void Initialize();
}; // Size: 0x1B0

#endif
