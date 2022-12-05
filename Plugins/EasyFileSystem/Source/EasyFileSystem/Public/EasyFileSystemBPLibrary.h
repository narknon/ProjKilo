#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EasyFileSystemBPLibrary.generated.h"

UCLASS(Blueprintable)
class UEasyFileSystemBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEasyFileSystemBPLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetReadOnly(const FString& inPath, bool bNewReadOnlyValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveStringToFile(const FString& inPath, const FString& textData);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveArrayToFile(const FString& inPath, TArray<uint8> Array);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveFile(const FString& to, const FString& from);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LoadFileToString(const FString& inPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadFileToArray(const FString& inPath, TArray<uint8>& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReadOnly(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringFieldJson(const FString& Data, const FString& fieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSourceDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSizeFile(const FString& inPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectFilePath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIntegerFieldJson(const FString& Data, const FString& fieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFilenameOnDisk(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetExtension(const FString& inPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEngineDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBoolFieldJson(const FString& Data, const FString& fieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> FindFiles(const FString& Directory, const FString& fileExtension);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FileExists(const FString& inPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DirectoryExists(const FString& inPath);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFile(const FString& inPath);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteDirectory(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateDirectory(const FString& inPath);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyFile(const FString& to, const FString& from);
    
    UFUNCTION(BlueprintCallable)
    static bool CopyDirectoryTree(const FString& destinationDirectory, const FString& Source, const bool bOverwriteAllExisting);
    
    UFUNCTION(BlueprintCallable)
    static FString ChangeExtension(const FString& inPath, const FString& inNewExtension);
    
};

