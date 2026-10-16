#ifndef UE4SS_SDK_Modular_PA_Head_Center_Master_HPP
#define UE4SS_SDK_Modular_PA_Head_Center_Master_HPP

class AModular_PA_Head_Center_Master_C : public AModular_Weapon_Module_C
{
    int32 Materian Int Min;                                                           // 0x041C (size: 0x4)
    int32 Materian Int Max;                                                           // 0x0420 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x424

#endif
