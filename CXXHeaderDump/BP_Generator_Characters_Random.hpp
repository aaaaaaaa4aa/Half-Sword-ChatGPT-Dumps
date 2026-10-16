#ifndef UE4SS_SDK_BP_Generator_Characters_Random_HPP
#define UE4SS_SDK_BP_Generator_Characters_Random_HPP

class ABP_Generator_Characters_Random_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class UDA_Character_Names_Master_C* Name Generator;                               // 0x02A0 (size: 0x8)
    FStr_Medieval_Color_Swatches Colors;                                              // 0x02A8 (size: 0x28)
    class UGI_Settings_C* As GI Settings;                                             // 0x02D0 (size: 0x8)
    double Equipment Budget;                                                          // 0x02D8 (size: 0x8)
    bool Champion;                                                                    // 0x02E0 (size: 0x1)

    void Generate Character(TSubclassOf<class AWillie_BP_C> Actor Class, TEnumAsByte<Enum_Nationalities::Type> Nationality, TEnumAsByte<Enum_Ranks::Type> Tier, bool Is Mercenary, bool Ignore Budget, FStr_Passport_Character1& Character Passport);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Generator_Characters_Random(int32 EntryPoint);
}; // Size: 0x2E1

#endif
