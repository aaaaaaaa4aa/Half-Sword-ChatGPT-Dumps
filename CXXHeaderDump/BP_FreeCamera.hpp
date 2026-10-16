#ifndef UE4SS_SDK_BP_FreeCamera_HPP
#define UE4SS_SDK_BP_FreeCamera_HPP

class ABP_FreeCamera_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0298 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x02A0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02A8 (size: 0x8)
    double MovementInterpolationSpeed;                                                // 0x02B0 (size: 0x8)
    double RotationInterpolationSpeed;                                                // 0x02B8 (size: 0x8)
    double MovementSensitivity;                                                       // 0x02C0 (size: 0x8)
    double RotationSensitivity;                                                       // 0x02C8 (size: 0x8)
    bool bUseMaximumDistance;                                                         // 0x02D0 (size: 0x1)
    double MaximumDistance;                                                           // 0x02D8 (size: 0x8)
    FBP_FreeCamera_CIsMovingCamera isMovingCamera;                                    // 0x02E0 (size: 0x10)
    void isMovingCamera();
    FBP_FreeCamera_CIsNotMovingCamera isNotMovingCamera;                              // 0x02F0 (size: 0x10)
    void isNotMovingCamera();
    double StartingFOV;                                                               // 0x0300 (size: 0x8)
    double StartingRoll;                                                              // 0x0308 (size: 0x8)
    class UBPC_PhotoMode_C* PhotoModeComponentReference;                              // 0x0310 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FreeCamera(int32 EntryPoint);
    void isNotMovingCamera__DelegateSignature();
    void isMovingCamera__DelegateSignature();
}; // Size: 0x318

#endif
