#ifndef UE4SS_SDK_Map_Hub_Tavern_Frank_HPP
#define UE4SS_SDK_Map_Hub_Tavern_Frank_HPP

class AMap_Hub_Tavern_Frank_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x02A0 (size: 0x8)
    TEnumAsByte<Enum_DayTime::Type> Day Time;                                         // 0x02A8 (size: 0x1)

    void Day Time Change();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Map_Hub_Tavern_Frank(int32 EntryPoint);
}; // Size: 0x2A9

#endif
