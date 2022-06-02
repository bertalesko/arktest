#include "main.h"
#include <tchar.h>

int ProcessErrorId = 0;
char* ProcessError = nullptr;
bool ProcessSelected = false;
int ProcessListSize = 0;
int ProcessIndex = 0;
char** ProcessList = nullptr;
DWORD* ProcessIdList = nullptr;
bool ProcessListUpdated = false;
int ProcessValidCounter = 0;
bool ProcessMenuActive = false;




DWORD64 GetModuleBase(LPSTR lpModuleName, DWORD dwProcessId)
{
	MODULEENTRY32 lpModuleEntry = { 0 };
	HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, dwProcessId);

	if (!hSnapShot)
		return NULL;
	lpModuleEntry.dwSize = sizeof(lpModuleEntry);
	BOOL bModule = Module32First(hSnapShot, &lpModuleEntry);
	while (bModule)
	{
		if (!strcmp(lpModuleEntry.szModule, lpModuleName))
		{
			CloseHandle(hSnapShot);
			return (DWORD64)lpModuleEntry.modBaseAddr;
		}
		bModule = Module32Next(hSnapShot, &lpModuleEntry);
	}
	CloseHandle(hSnapShot);
	return NULL;
}


int GetProcessCount()
{
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hSnapshot == INVALID_HANDLE_VALUE) return 1;

	PROCESSENTRY32 lppe;
	lppe.dwSize = sizeof(lppe);

	int ProcessCount = 1;
	while (Process32Next(hSnapshot, &lppe))
	{
		if (!strcmp(lppe.szExeFile, "ShooterGame.exe"))
		{
			ProcessCount++;
		}
	}

	CloseHandle(hSnapshot);
	return ProcessCount;
}

BOOL HwndEnumFunc(HWND hwnd, LPARAM lParam)
{
	DWORD lpdwProcessId;
	GetWindowThreadProcessId(hwnd, &lpdwProcessId);

	if (lpdwProcessId == lParam)
	{
		char Buffer[sizeof("ARK: Survival Evolved")] = { '\0' };
		if (GetClassName(hwnd, Buffer, sizeof(Buffer)))
		{
			if (!strcmp(Buffer, "ARK: Survival Evolved"))
			{
				Hwnd = hwnd;
				return FALSE;
			}
		}
	}

	Hwnd = NULL;
	return TRUE;
}


uint64_t GetModulemoduleBase(DWORD ProcessId, const char* Module)
{
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, ProcessId);
	if (hSnapshot == INVALID_HANDLE_VALUE) return 0;

	MODULEENTRY32 lpme;
	lpme.dwSize = sizeof(lpme);

	while (Module32Next(hSnapshot, &lpme))
	{
		if (!strcmp(lpme.szModule, Module))
		{
			CloseHandle(hSnapshot);
			return uint64_t(lpme.modBaseAddr);
		}
	}

	CloseHandle(hSnapshot);
	return 0;
}

bool ProcessValid(DWORD ProcessId)
{
	Pid = ProcessId;
	if (!Pid)
	{
		std::cout << "Invalid pId\n";
		return false;
	}

	Exe = GetModuleBase(LPSTR("ShooterGame.exe"), Pid);
	if (!Exe)
	{
		std::cout << "Invalid Base Address\n";
		return false;
	}

	Handle = OpenProcess(PROCESS_ALL_ACCESS, false, Pid);
	if (Handle == NULL)
	{
		std::cout << "Invalid Handle\n";
		return false;
	}

	std::cout << "Process Valid!\n";
	return true;
}


bool MainLoop()
{
	int sinceLastRefresh = clock();
	int startTime = clock();
	int blokada;

	while (!GetAsyncKeyState(VK_END))
	{

		if (clock() - startTime > 100)  
		{
			startTime = clock();
			if (clock() - sinceLastRefresh > 100)
			{
				sinceLastRefresh = clock();
				system("cls");
				std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl << std::endl;
				std::cout << "END konczy" << std::endl << std::endl;
				std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl << std::endl;



			}


		}
		exit(8);
	
}

