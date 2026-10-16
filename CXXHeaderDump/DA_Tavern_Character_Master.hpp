#ifndef UE4SS_SDK_DA_Tavern_Character_Master_HPP
#define UE4SS_SDK_DA_Tavern_Character_Master_HPP

class UDA_Tavern_Character_Master_C : public UPrimaryDataAsset
{
    TMap<TEnumAsByte<Enum_DayTime::Type>, double> Spawn Chance;                       // 0x0030 (size: 0x50)

    void Get Spawn Chance(TEnumAsByte<Enum_DayTime::Type> Time, double& Chance);
}; // Size: 0x80

#endif
