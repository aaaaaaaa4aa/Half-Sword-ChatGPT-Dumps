#ifndef UE4SS_SDK_BP_FreeCamera_DUPL_1_HPP
#define UE4SS_SDK_BP_FreeCamera_DUPL_1_HPP

class ABP_FreeCamera_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* Grab Scene;                                                // 0x0320 (size: 0x8)
    class USceneComponent* Handle Scene;                                              // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0330 (size: 0x8)
    class USceneComponent* Pointer_Scene;                                             // 0x0338 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_DF9D2B1947F885C5EE7884AE6585ECD1; // 0x0350 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0358 (size: 0x8)
    float Axis Value Cursor Y;                                                        // 0x0360 (size: 0x4)
    float Axis Value Cursor X;                                                        // 0x0364 (size: 0x4)
    int32 Screen X Limit;                                                             // 0x0368 (size: 0x4)
    int32 Screen Y Limit;                                                             // 0x036C (size: 0x4)
    class AWillie_BP_DressUp_C* MyDressUpDarling;                                     // 0x0370 (size: 0x8)
    class UPhysicsHandleComponent* Handle;                                            // 0x0378 (size: 0x8)
    class UPrimitiveComponent* Grab Target;                                           // 0x0380 (size: 0x8)
    double Grab Distance;                                                             // 0x0388 (size: 0x8)
    bool Item Grabbed;                                                                // 0x0390 (size: 0x1)
    FVector World Direction;                                                          // 0x0398 (size: 0x18)
    double NewVar;                                                                    // 0x03B0 (size: 0x8)
    FStr_Passport_Armor1 Armor Passport;                                              // 0x03B8 (size: 0xD8)
    bool Armor Found;                                                                 // 0x0490 (size: 0x1)
    class AActor* Spawned Item;                                                       // 0x0498 (size: 0x8)
    FBP_FreeCamera_CED Move Spawned Item to Item List ED Move Spawned Item to Item List; // 0x04A0 (size: 0x10)
    void ED Move Spawned Item to Item List();
    FBP_FreeCamera_CED Release Grabbed Item ED Release Grabbed Item;                  // 0x04B0 (size: 0x10)
    void ED Release Grabbed Item();
    FBP_FreeCamera_CED Check Arming Points ED Check Arming Points;                    // 0x04C0 (size: 0x10)
    void ED Check Arming Points();
    bool Click Hold (Hold);                                                           // 0x04D0 (size: 0x1)
    bool Hit Is Weapon;                                                               // 0x04D1 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> Hit Surface;                                        // 0x04D2 (size: 0x1)
    bool Can Poke;                                                                    // 0x04D3 (size: 0x1)
    int32 Selection;                                                                  // 0x04D4 (size: 0x4)
    class UGI_Settings_C* As GI Settings;                                             // 0x04D8 (size: 0x8)
    bool CHaracter Damageable;                                                        // 0x04E0 (size: 0x1)

    void Create Grab Handle(FVector GrabLocation, class UPrimitiveComponent* Component, FName InBoneName);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void Release Handle Event();
    void Take off Armor();
    void Destroy Spawned Item();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FreeCamera(int32 EntryPoint);
    void ED Check Arming Points__DelegateSignature();
    void ED Release Grabbed Item__DelegateSignature();
    void ED Move Spawned Item to Item List__DelegateSignature();
}; // Size: 0x4E1

#endif
