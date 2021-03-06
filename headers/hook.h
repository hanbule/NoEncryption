﻿#pragma once
#define LIAPI __declspec(dllexport)
#include<string>
extern "C" {
	// The core api of the hook function
		//__declspec(dllimport) int HookFunction(void* oldfunc, void** poutold, void* newfunc);
	// Used to get a server-defined specific function by name
	LIAPI int HookFunction(void* oldfunc, void** poutold, void* newfunc);
	LIAPI void* GetServerSymbol(char const* name);
	//LIAPI void WaitForDebugger();
}
//LIAPI std::string ptr2name(void* ptr);
//LIAPI std::string GetDataPath(const std::string& myname);