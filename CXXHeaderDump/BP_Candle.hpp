#ifndef UE4SS_SDK_BP_Candle_HPP
#define UE4SS_SDK_BP_Candle_HPP

class ABP_Candle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Candle;                                               // 0x0298 (size: 0x8)
    class UNiagaraComponent* SmokeRibbonFX;                                           // 0x02A0 (size: 0x8)
    class UNiagaraComponent* FlameParticle;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* WickLoc;                                                   // 0x02B0 (size: 0x8)
    float WindLoopTimeline_LightScale_8D56843F4223972DB7A5F58C77AC548F;               // 0x02B8 (size: 0x4)
    float WindLoopTimeline_WindTurbulenceY_8D56843F4223972DB7A5F58C77AC548F;          // 0x02BC (size: 0x4)
    float WindLoopTimeline_WindTurbulenceX_8D56843F4223972DB7A5F58C77AC548F;          // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> WindLoopTimeline__Direction_8D56843F4223972DB7A5F58C77AC548F; // 0x02C4 (size: 0x1)
    class UTimelineComponent* WindLoopTimeline;                                       // 0x02C8 (size: 0x8)
    float WindFadeIOTimeline_HalfFadeTime_11F24F504584A9F8BD97829E3D73C33F;           // 0x02D0 (size: 0x4)
    float WindFadeIOTimeline_QuarterFadeTimePlayedInReverse_11F24F504584A9F8BD97829E3D73C33F; // 0x02D4 (size: 0x4)
    float WindFadeIOTimeline_FullFadeTime_11F24F504584A9F8BD97829E3D73C33F;           // 0x02D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> WindFadeIOTimeline__Direction_11F24F504584A9F8BD97829E3D73C33F; // 0x02DC (size: 0x1)
    class UTimelineComponent* WindFadeIOTimeline;                                     // 0x02E0 (size: 0x8)
    float FlameWobbleTimeline_SpriteScale_E363A614486B3687683AF6B0CC03D249;           // 0x02E8 (size: 0x4)
    float FlameWobbleTimeline_WindTurbulenceY_E363A614486B3687683AF6B0CC03D249;       // 0x02EC (size: 0x4)
    float FlameWobbleTimeline_WindTurbulenceX_E363A614486B3687683AF6B0CC03D249;       // 0x02F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FlameWobbleTimeline__Direction_E363A614486B3687683AF6B0CC03D249; // 0x02F4 (size: 0x1)
    class UTimelineComponent* FlameWobbleTimeline;                                    // 0x02F8 (size: 0x8)
    bool IsLit;                                                                       // 0x0300 (size: 0x1)
    bool RandomMesh;                                                                  // 0x0301 (size: 0x1)
    int32 Mesh;                                                                       // 0x0304 (size: 0x4)
    class UMaterialInstanceDynamic* CandleMatInst;                                    // 0x0308 (size: 0x8)
    class UMaterialInstanceDynamic* WickMatInst;                                      // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* CandleFlameMatInst;                               // 0x0318 (size: 0x8)
    TEnumAsByte<E_CandleMeshes::Type> MeshChoice;                                     // 0x0320 (size: 0x1)
    bool RandomScale;                                                                 // 0x0321 (size: 0x1)
    double ScaleHeight;                                                               // 0x0328 (size: 0x8)
    double ScaleWidth;                                                                // 0x0330 (size: 0x8)
    double WidthRadius;                                                               // 0x0338 (size: 0x8)
    double GlobalScale;                                                               // 0x0340 (size: 0x8)
    bool RandomRotation;                                                              // 0x0348 (size: 0x1)
    double Rotation;                                                                  // 0x0350 (size: 0x8)
    FLinearColor CandleColor;                                                         // 0x0358 (size: 0x10)
    bool RandomColor;                                                                 // 0x0368 (size: 0x1)
    double LightColorSaturation;                                                      // 0x0370 (size: 0x8)
    double RandomCandleID;                                                            // 0x0378 (size: 0x8)
    bool FlameSpawnParticleLight;                                                     // 0x0380 (size: 0x1)
    int32 MeshRandom;                                                                 // 0x0384 (size: 0x4)
    double LightSpawnPercent;                                                         // 0x0388 (size: 0x8)
    double LightFallOff;                                                              // 0x0390 (size: 0x8)
    double RandomHueFromColor;                                                        // 0x0398 (size: 0x8)
    double RandomSaturation;                                                          // 0x03A0 (size: 0x8)
    double RandomValue;                                                               // 0x03A8 (size: 0x8)
    FLinearColor BaseColor;                                                           // 0x03B0 (size: 0x10)
    double FlickerScale;                                                              // 0x03C0 (size: 0x8)
    FVector CandleFlameAlignment;                                                     // 0x03C8 (size: 0x18)
    FVector SpriteAlignDirection;                                                     // 0x03E0 (size: 0x18)
    double LightIntensity;                                                            // 0x03F8 (size: 0x8)
    FVector2D InitialFlameSize;                                                       // 0x0400 (size: 0x10)
    double LightFallOffScale;                                                         // 0x0410 (size: 0x8)
    bool MeshCastShadows;                                                             // 0x0418 (size: 0x1)
    FVector Wind Direction;                                                           // 0x0420 (size: 0x18)
    double Wind Strength;                                                             // 0x0438 (size: 0x8)
    double Wind Turbulence;                                                           // 0x0440 (size: 0x8)
    double WindFadeOutTime;                                                           // 0x0448 (size: 0x8)
    double WindStrengthOriginal;                                                      // 0x0450 (size: 0x8)
    double WindFadeInStr;                                                             // 0x0458 (size: 0x8)
    bool IsWindEnding;                                                                // 0x0460 (size: 0x1)
    bool IsWind;                                                                      // 0x0461 (size: 0x1)
    double WobbleStrength;                                                            // 0x0468 (size: 0x8)
    bool RandomWindTurbulence;                                                        // 0x0470 (size: 0x1)
    double FlameScale;                                                                // 0x0478 (size: 0x8)
    double FlameScaleRandomRange;                                                     // 0x0480 (size: 0x8)

    void UserConstructionScript();
    void WindLoopTimeline__FinishedFunc();
    void WindLoopTimeline__UpdateFunc();
    void WindFadeIOTimeline__FinishedFunc();
    void WindFadeIOTimeline__UpdateFunc();
    void FlameWobbleTimeline__FinishedFunc();
    void FlameWobbleTimeline__UpdateFunc();
    void CandleUnlit();
    void CandleLit(double Delay);
    void EventWind(FVector WindDirection, double WindStrength);
    void EventEndWind();
    void SetInitialFlameState();
    void BlownOut(double Delay);
    void RandomWobble();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Candle(int32 EntryPoint);
}; // Size: 0x488

#endif
