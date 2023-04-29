// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // Execute Calculator
        WinExec("calc.exe", SW_SHOW);
        break;
    }
    return TRUE;
}

