#include "EasyFileSystemBPLibrary.h"

bool UEasyFileSystemBPLibrary::SetReadOnly(const FString& inPath, bool bNewReadOnlyValue) {
    return false;
}

bool UEasyFileSystemBPLibrary::SaveStringToFile(const FString& inPath, const FString& textData) {
    return false;
}

bool UEasyFileSystemBPLibrary::SaveArrayToFile(const FString& inPath, TArray<uint8> Array) {
    return false;
}

bool UEasyFileSystemBPLibrary::MoveFile(const FString& to, const FString& from) {
    return false;
}

FString UEasyFileSystemBPLibrary::LoadFileToString(const FString& inPath) {
    return TEXT("");
}

bool UEasyFileSystemBPLibrary::LoadFileToArray(const FString& inPath, TArray<uint8>& Result) {
    return false;
}

bool UEasyFileSystemBPLibrary::IsReadOnly(const FString& Filename) {
    return false;
}

FString UEasyFileSystemBPLibrary::GetStringFieldJson(const FString& Data, const FString& fieldName) {
    return TEXT("");
}

FString UEasyFileSystemBPLibrary::GetSourceDir() {
    return TEXT("");
}

int32 UEasyFileSystemBPLibrary::GetSizeFile(const FString& inPath) {
    return 0;
}

FString UEasyFileSystemBPLibrary::GetProjectFilePath() {
    return TEXT("");
}

int32 UEasyFileSystemBPLibrary::GetIntegerFieldJson(const FString& Data, const FString& fieldName) {
    return 0;
}

FString UEasyFileSystemBPLibrary::GetFilenameOnDisk(const FString& Filename) {
    return TEXT("");
}

FString UEasyFileSystemBPLibrary::GetExtension(const FString& inPath) {
    return TEXT("");
}

FString UEasyFileSystemBPLibrary::GetEngineDir() {
    return TEXT("");
}

bool UEasyFileSystemBPLibrary::GetBoolFieldJson(const FString& Data, const FString& fieldName) {
    return false;
}

TArray<FString> UEasyFileSystemBPLibrary::FindFiles(const FString& Directory, const FString& fileExtension) {
    return TArray<FString>();
}

bool UEasyFileSystemBPLibrary::FileExists(const FString& inPath) {
    return false;
}

bool UEasyFileSystemBPLibrary::DirectoryExists(const FString& inPath) {
    return false;
}

bool UEasyFileSystemBPLibrary::DeleteFile(const FString& inPath) {
    return false;
}

bool UEasyFileSystemBPLibrary::DeleteDirectory(const FString& Directory) {
    return false;
}

bool UEasyFileSystemBPLibrary::CreateDirectory(const FString& inPath) {
    return false;
}

bool UEasyFileSystemBPLibrary::CopyFile(const FString& to, const FString& from) {
    return false;
}

bool UEasyFileSystemBPLibrary::CopyDirectoryTree(const FString& destinationDirectory, const FString& Source, const bool bOverwriteAllExisting) {
    return false;
}

FString UEasyFileSystemBPLibrary::ChangeExtension(const FString& inPath, const FString& inNewExtension) {
    return TEXT("");
}

UEasyFileSystemBPLibrary::UEasyFileSystemBPLibrary() {
}

