#pragma once
// your code here
inline std::vector<TslEntity> entitySESPList;

extern bool RPM(DWORD64 src, void* dst, size_t Size, HANDLE Handle);
extern bool WPM(DWORD64 dst, void* src, size_t Size, HANDLE Handle);


void ShowDebugStructureid();
void ShowStructures();

