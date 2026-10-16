#ifndef UE4SS_SDK_BPI_ComplexCollision_HPP
#define UE4SS_SDK_BPI_ComplexCollision_HPP

class IBPI_ComplexCollision_C : public IInterface
{

    void Deal Complex Damage(class UPrimitiveComponent* Hit Component, class UPrimitiveComponent* Collided Component, FName Hit Bone, FVector Location, FVector Normal, FVector Hit Velocity, FVector Hit Impulse, double Cutting Power, double Stab Rate, double Rigidity, int32 Blunt Destruction Int, bool Lower Threshold In, bool Damage Parent Bone?, double Kick Power, class UBoxComponent* Hit Box, bool Extra High Velocity, double Draw Cut, TEnumAsByte<EPhysicalSurface>& Hit Surface, double& Damage Out, double& Cutting Rate Out, double& Rigidity Out, double& Material Density Out, bool& Lower Threshold Out);
}; // Size: 0x28

#endif
