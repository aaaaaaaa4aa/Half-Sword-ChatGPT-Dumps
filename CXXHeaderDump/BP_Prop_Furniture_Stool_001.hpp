#ifndef UE4SS_SDK_BP_Prop_Furniture_Stool_001_HPP
#define UE4SS_SDK_BP_Prop_Furniture_Stool_001_HPP

class ABP_Prop_Furniture_Stool_001_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* SM_Prop;                                              // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void BndEvt__Barrel_BP_SM_Barrel_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Prop_Furniture_Stool_001(int32 EntryPoint);
}; // Size: 0x2A8

#endif
