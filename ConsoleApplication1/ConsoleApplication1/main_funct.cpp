#include "main.h"


bool startup() {



	HWND gameWindow = FindWindow(0, ("ARK: Survival Evolved"));
	if (gameWindow == 0) {
		Sleep(4444);
		printf("Can't find window\n");
		char f;
		std::cin >> f;
		return false;
	}

	DWORD pID = 0;
	GetWindowThreadProcessId(gameWindow, &pID);






	Handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
	moduleBase = GetModuleBase(LPSTR("ShooterGame.exe"), pID);
	std::cout << std::hex << moduleBase << std::endl;
	if (!RPM(moduleBase + Offsets::UWorld, &Managers::Base::GWorld, sizeof(DWORD64), Handle))
	{
		std::cout << ("Gworld error\n");
		return false;
	}
	std::cout << "Gword ok - " << Managers::Base::GWorld << std::endl;


	if (!RPM(Managers::Base::GWorld + Offsets::Engine::World::Levels, &Managers::Base::PersistentLevel, sizeof(DWORD64), Handle))
	{
		std::cout << "PersistentLevel error\n";
		return false;
	}
	std::cout << "PersistentLevel ok - " << Managers::Base::PersistentLevel << std::endl;;

	if (!RPM(Managers::Base::PersistentLevel + Offsets::Engine::Level::AActors, &Managers::EntityList, sizeof(DWORD64), Handle))
	{
		std::cout << "Entit list error\n";
		return false;
	}
	std::cout << "EntityList ok - " << Managers::EntityList << std::endl;;



	if (!RPM(Managers::Base::GWorld + Offsets::Engine::World::OwningGameInstance, &Managers::Base::OwningGameInstance, sizeof(DWORD64), Handle))
	{
		std::cout << "OwningGameInstance error\n";
		return false;
	}
	std::cout << "OwningGameInstance ok - " << Managers::Base::OwningGameInstance << std::endl;


	if (!RPM(Managers::Base::OwningGameInstance + Offsets::Engine::GameInstance::LocalPlayers, &Managers::Base::LocalPlayers, sizeof(DWORD64), Handle))
	{
		printf("[x] Failed to find LocalPlayers");
		return false;
	}
	std::cout << "LocalPlayers ok - " << Managers::Base::LocalPlayers << std::endl;



	Sleep(4444);
	return true;
}

