#ifndef UE4SS_SDK_DA_Character_Names_Master_HPP
#define UE4SS_SDK_DA_Character_Names_Master_HPP

class UDA_Character_Names_Master_C : public UPrimaryDataAsset
{
    TArray<FName> Names;                                                              // 0x0030 (size: 0x10)

    void Generate Name(FName& Name);
}; // Size: 0x40

#endif
