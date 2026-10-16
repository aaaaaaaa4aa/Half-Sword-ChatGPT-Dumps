#ifndef UE4SS_SDK_BP_Generator_CombatEvent_Random_HPP
#define UE4SS_SDK_BP_Generator_CombatEvent_Random_HPP

class ABP_Generator_CombatEvent_Random_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x02A0 (size: 0x8)

    void Generate Combat Event(bool Tourney, FStr_Passport_CombatEvent1& Passport);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Generator_CombatEvent_Random(int32 EntryPoint);
}; // Size: 0x2A8

#endif
