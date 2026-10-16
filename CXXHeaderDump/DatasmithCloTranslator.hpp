#ifndef UE4SS_SDK_DatasmithCloTranslator_HPP
#define UE4SS_SDK_DatasmithCloTranslator_HPP

struct FCloOptions
{
    bool bGenerateClothStaticMesh;                                                    // 0x0000 (size: 0x1)
    bool bGeneratePerPanel2DMesh;                                                     // 0x0001 (size: 0x1)
    bool bGenerateClothActor;                                                         // 0x0002 (size: 0x1)
    bool bPerPanelMaterial;                                                           // 0x0003 (size: 0x1)
    bool bSkipPanelsWithoutPhysicsProperties;                                         // 0x0004 (size: 0x1)
    float Scale;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

class UDatasmithCloImportOptions : public UDatasmithOptionsBase
{
    FCloOptions Options;                                                              // 0x0028 (size: 0xC)

}; // Size: 0x38

#endif
