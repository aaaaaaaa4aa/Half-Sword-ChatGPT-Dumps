#ifndef UE4SS_SDK_DatasmithCore_HPP
#define UE4SS_SDK_DatasmithCore_HPP

#include "DatasmithCore_enums.hpp"

struct FDatasmithMeshSourceModel
{
}; // Size: 0x40

class UDatasmithClothAssetFactory : public UObject
{
}; // Size: 0x28

class UDatasmithClothComponentFactory : public UObject
{
}; // Size: 0x28

class UDatasmithMesh : public UObject
{
    FString MeshName;                                                                 // 0x0028 (size: 0x10)
    bool bIsCollisionMesh;                                                            // 0x0038 (size: 0x1)
    TArray<FDatasmithMeshSourceModel> SourceModels;                                   // 0x0040 (size: 0x10)

}; // Size: 0x50

#endif
