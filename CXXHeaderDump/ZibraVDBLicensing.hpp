#ifndef UE4SS_SDK_ZibraVDBLicensing_HPP
#define UE4SS_SDK_ZibraVDBLicensing_HPP

#include "ZibraVDBLicensing_enums.hpp"

struct FErrorInfo
{
    FString license_info;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLicenseInfo
{
    FString license_key;                                                              // 0x0000 (size: 0x10)
    FString license;                                                                  // 0x0010 (size: 0x10)
    FString latest_version;                                                           // 0x0020 (size: 0x10)
    FString random_number;                                                            // 0x0030 (size: 0x10)
    FString hardware_id;                                                              // 0x0040 (size: 0x10)
    FString product;                                                                  // 0x0050 (size: 0x10)
    FString Message;                                                                  // 0x0060 (size: 0x10)
    FLicenseWarning Warning;                                                          // 0x0070 (size: 0x40)
    bool allowed_offline;                                                             // 0x00B0 (size: 0x1)
    bool node_locked;                                                                 // 0x00B1 (size: 0x1)

}; // Size: 0xB8

struct FLicenseKeyRequest
{
    FString api_version;                                                              // 0x0000 (size: 0x10)
    TArray<FString> license_keys;                                                     // 0x0010 (size: 0x10)
    TArray<FRandomNumberDeclaration> random_numbers;                                  // 0x0020 (size: 0x10)
    FString hardware_id;                                                              // 0x0030 (size: 0x10)
    FString Engine;                                                                   // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FLicenseKeyResponse
{
    FString license_info;                                                             // 0x0000 (size: 0x10)
    FString signature;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLicenseWarning
{
    FString header_text;                                                              // 0x0000 (size: 0x10)
    FString body_text;                                                                // 0x0010 (size: 0x10)
    FString button_text;                                                              // 0x0020 (size: 0x10)
    FString URL;                                                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRandomNumberDeclaration
{
    FString product;                                                                  // 0x0000 (size: 0x10)
    FString Number;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

class UZibraLicensingSettings : public UObject
{
    FString LicenseKey;                                                               // 0x0028 (size: 0x10)
    FString OfflineActivation;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
