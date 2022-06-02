#include "main.h"






bool RPM(DWORD64 src, void* dst, size_t Size, HANDLE Handle)
{
	return ReadProcessMemory(Handle, (void*)(src), dst, Size, NULL);
}

bool WPM(DWORD64 dst, void* src, size_t Size, HANDLE Handle)
{
	return WriteProcessMemory(Handle, (void*)(dst), src, Size, NULL);
}









void ShowDebugStructureid() {
	auto entityListCopy = entitySESPList;
	if (entityListCopy.empty()) return;

	for (auto i = 0; i < entityListCopy.size(); i++) {
		TslEntity entity = entityListCopy[i];
		std::stringstream	DebugESPStructureIDSS;
		DebugESPStructureIDSS << entity.StructureID;



		std::cout << DebugESPStructureIDSS.str().c_str() << std::endl;

	}
}

void ShowStructures() {
	auto entityListCopy = entitySESPList;
	if (entityListCopy.empty()) return;


	for (auto i = 0; i < entityListCopy.size(); i++) {
		TslEntity entity = entityListCopy[i];


		if (entity.Structure == true)
		{

			std::cout << entity.StructureName.c_str() << std::endl;

		}



	}
}