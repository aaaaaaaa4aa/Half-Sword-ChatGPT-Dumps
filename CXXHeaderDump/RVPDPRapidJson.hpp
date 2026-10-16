#ifndef UE4SS_SDK_RVPDPRapidJson_HPP
#define UE4SS_SDK_RVPDPRapidJson_HPP

struct FRVPDPRapidJsonCustomStructSerialization
{
}; // Size: 0x8

struct FRVPDPRapidJsonMyCustomStructSerializationExample : public FRVPDPRapidJsonCustomStructSerialization
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    int32 Age;                                                                        // 0x0018 (size: 0x4)

}; // Size: 0x20

class ARVPDPRapidJsonStructExample : public AActor
{
}; // Size: 0x2C0

class URVPDPRapidJsonFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SerializeVectorArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVector> ArrayToSerialize, FString& SerializedString);
    void SerializeUint8ArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<uint8> ArrayToSerialize, FString& SerializedString);
    FString SerializeUInt8_Wrapper(uint8 UInt8Value);
    void SerializeTransformArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FTransform> ArrayToSerialize, FString& SerializedString);
    void SerializeTextArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FText> ArrayToSerialize, FString& SerializedString);
    FString SerializeTArrayUInt8_Wrapper(const TArray<uint8>& InUInt8s);
    FString SerializeTArrayInt_Wrapper(const TArray<int32>& InInts);
    FString SerializeTArrayInt64_Wrapper(const TArray<int64>& InInt64s);
    FString SerializeTArrayFVector_Wrapper(const TArray<FVector>& inFVector);
    FString SerializeTArrayFTransform_Wrapper(const TArray<FTransform>& InTransform);
    FString SerializeTArrayFText_Wrapper(const TArray<FText>& InTexts);
    FString SerializeTArrayFString_Wrapper(const TArray<FString>& InStrings);
    FString SerializeTArrayFRotator_Wrapper(const TArray<FRotator>& InRotator);
    FString SerializeTArrayFName_Wrapper(const TArray<FName>& InNames);
    FString SerializeTArrayFloat_Wrapper(const TArray<float>& inFloats);
    FString SerializeTArrayFColor_Wrapper(const TArray<FColor>& Colors);
    FString SerializeTArrayBool_Wrapper(const TArray<bool>& InBools);
    void SerializeStringArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FString> ArrayToSerialize, FString& SerializedString);
    void SerializeRotatorArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FRotator> ArrayToSerialize, FString& SerializedString);
    void SerializeNameArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FName> ArrayToSerialize, FString& SerializedString);
    FString SerializeInt_Wrapper(int32 IntValue);
    void SerializeInt64ArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<int64> ArrayToSerialize, FString& SerializedString);
    FString SerializeInt64_Wrapper(int64 Int64Value);
    void SerializeInt32ArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<int32> ArrayToSerialize, FString& SerializedString);
    FString SerializeFVector_Wrapper(FVector VectorValue);
    FString SerializeFTransform_Wrapper(FTransform TransformValue);
    FString SerializeFText_Wrapper(FText TextValue);
    FString SerializeFString_Wrapper(FString StringValue);
    FString SerializeFRotator_Wrapper(FRotator RotatorValue);
    FString SerializeFName_Wrapper(FName NameValue);
    void SerializeFloatArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<float> ArrayToSerialize, FString& SerializedString);
    FString SerializeFloat_Wrapper(float FloatValue);
    FString SerializeFColor_Wrapper(FColor ColorValue);
    void SerializeColorArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FColor> ArrayToSerialize, FString& SerializedString);
    void SerializeBoolArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<bool> ArrayToSerialize, FString& SerializedString);
    FString SerializeBool_Wrapper(bool BoolValue);
    void DeSerializeVectorArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<FVector>& DeSerializedResult);
    void DeSerializeUInt8ArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<uint8>& DeSerializedResult);
    uint8 DeserializeUInt8_Wrapper(FString JsonString);
    void DeSerializeTransformArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<FTransform>& DeSerializedResult);
    void DeSerializeTextArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<FText>& DeSerializedResult);
    TArray<uint8> DeserializeTArrayUInt8_Wrapper(FString JsonString);
    TArray<int32> DeserializeTArrayInt_Wrapper(FString JsonString);
    TArray<int64> DeserializeTArrayInt64_Wrapper(FString JsonString);
    TArray<FVector> DeserializeTArrayFVector_Wrapper(FString JsonString);
    TArray<FTransform> DeserializeTArrayFTransform_Wrapper(FString JsonString);
    TArray<FText> DeserializeTArrayFText_Wrapper(FString JsonString);
    TArray<FString> DeserializeTArrayFString_Wrapper(FString JsonString);
    TArray<FRotator> DeserializeTArrayFRotator_Wrapper(FString JsonString);
    TArray<FName> DeserializeTArrayFName_Wrapper(FString JsonString);
    TArray<float> DeserializeTArrayFloat_Wrapper(FString JsonString);
    TArray<FColor> DeserializeTArrayFColor_Wrapper(FString JsonString);
    TArray<bool> DeserializeTArrayBool_Wrapper(FString JsonString);
    void DeSerializeStringArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<FString>& DeSerializedResult);
    void DeSerializeRotatorArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<FRotator>& DeSerializedResult);
    void DeSerializeNameArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<FName>& DeSerializedResult);
    int32 DeserializeInt_Wrapper(FString JsonString);
    void DeSerializeInt64ArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<int64>& DeSerializedResult);
    int64 DeserializeInt64_Wrapper(FString JsonString);
    void DeSerializeInt32ArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<int32>& DeSerializedResult);
    FVector DeserializeFVector_Wrapper(FString JsonString);
    FTransform DeserializeFTransform_Wrapper(FString JsonString);
    FText DeserializeFText_Wrapper(FString JsonString);
    FString DeserializeFString_Wrapper(FString JsonString);
    FRotator DeserializeFRotator_Wrapper(FString JsonString);
    FName DeserializeFName_Wrapper(FString JsonString);
    void DeSerializeFloatArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<float>& DeSerializedResult);
    float DeserializeFloat_Wrapper(FString JsonString);
    FColor DeserializeFColor_Wrapper(FString JsonString);
    void DeSerializeColorArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<FColor>& DeSerializedResult);
    void DeSerializeBoolArrayAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString StringToDeSerialize, TArray<bool>& DeSerializedResult);
    bool DeserializeBool_Wrapper(FString JsonString);
}; // Size: 0x28

#endif
