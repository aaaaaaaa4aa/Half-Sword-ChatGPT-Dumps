#ifndef UE4SS_SDK_Willie_BP_DressUp_HPP
#define UE4SS_SDK_Willie_BP_DressUp_HPP

class AWillie_BP_DressUp_C : public AWillie_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x4748 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x4750 (size: 0x8)
    class USceneComponent* Pointer Scene;                                             // 0x4758 (size: 0x8)
    FVector Default Location;                                                         // 0x4760 (size: 0x18)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Set Up Armor(bool Clear Previous, bool No Check Block (Kostyl'));
    void Reset Character();
    void ExecuteUbergraph_Willie_BP_DressUp(int32 EntryPoint);
}; // Size: 0x4778

#endif
