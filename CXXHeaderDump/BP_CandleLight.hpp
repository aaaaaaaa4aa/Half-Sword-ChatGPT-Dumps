#ifndef UE4SS_SDK_BP_CandleLight_HPP
#define UE4SS_SDK_BP_CandleLight_HPP

class ABP_CandleLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UChildActorComponent* LightDetectorCollider;                                // 0x0298 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    float Timeline_NewTrack_0_EE7D0C9A4078E1025B74E08E482262C8;                       // 0x02B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_EE7D0C9A4078E1025B74E08E482262C8; // 0x02B4 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x02B8 (size: 0x8)
    FLinearColor Defoult light color;                                                 // 0x02C0 (size: 0x10)
    double Light Inensity;                                                            // 0x02D0 (size: 0x8)
    float Attenuation Radius;                                                         // 0x02D8 (size: 0x4)
    double Wiggle;                                                                    // 0x02E0 (size: 0x8)

    void UserConstructionScript();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CandleLight(int32 EntryPoint);
}; // Size: 0x2E8

#endif
