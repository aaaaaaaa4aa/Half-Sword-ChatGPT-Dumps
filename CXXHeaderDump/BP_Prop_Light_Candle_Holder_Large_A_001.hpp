#ifndef UE4SS_SDK_BP_Prop_Light_Candle_Holder_Large_A_001_HPP
#define UE4SS_SDK_BP_Prop_Light_Candle_Holder_Large_A_001_HPP

class ABP_Prop_Light_Candle_Holder_Large_A_001_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UChildActorComponent* LightDetectorCollider;                                // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Light;                                                // 0x02A0 (size: 0x8)
    class UChildActorComponent* BP_CandleMoveable;                                    // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Holder;                                               // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)

    void BndEvt__BP_Prop_Arena_Undercroft_Candle_Holder_Large_B_001_Holder_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Prop_Light_Candle_Holder_Large_A_001(int32 EntryPoint);
}; // Size: 0x2C0

#endif
