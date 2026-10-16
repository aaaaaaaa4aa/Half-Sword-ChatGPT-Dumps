#ifndef UE4SS_SDK_BPI_Living_Thing_HPP
#define UE4SS_SDK_BPI_Living_Thing_HPP

class IBPI_Living_Thing_C : public IInterface
{

    void Attach Decal(class UDecalComponent* Decal, FAttached_Transform_Str Attach Param, bool& Nul);
    void Get Damage(FVector Impulse, FVector Velocity, FVector Location, FVector Normal, FName bone, double Raw Damage, double Cutting Power, bool Inside, class UPrimitiveComponent* Damaged Mesh, int32 Dism Blunt, bool Lower Threshold, bool Shockwave, class UPrimitiveComponent* Hit By Component, bool Stab?, class UBoxComponent* Hit Box, double Pain Rate, bool Hit Flesh, double Draw Cut, double& Damage Out);
}; // Size: 0x28

#endif
