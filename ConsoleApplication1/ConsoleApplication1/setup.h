#pragma once


DWORD64 GetModuleBase(LPSTR lpModuleName, DWORD dwProcessId);

bool startup();
bool MainLoop();


