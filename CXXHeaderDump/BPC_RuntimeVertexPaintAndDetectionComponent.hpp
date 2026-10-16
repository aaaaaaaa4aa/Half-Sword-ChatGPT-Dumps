#ifndef UE4SS_SDK_BPC_RuntimeVertexPaintAndDetectionComponent_HPP
#define UE4SS_SDK_BPC_RuntimeVertexPaintAndDetectionComponent_HPP

class UBPC_RuntimeVertexPaintAndDetectionComponent_C : public UVertexPaintDetectionComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)

    void ExecuteUbergraph_BPC_RuntimeVertexPaintAndDetectionComponent(int32 EntryPoint);
}; // Size: 0x4B0

#endif
