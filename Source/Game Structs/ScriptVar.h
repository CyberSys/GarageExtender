// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


union ScriptVar	// sizeof = 0x4
{
	DWORD dwParam;
	int nParam;
	float fParam;
	void* pParam;
	char* szParam;
};

static_assert(sizeof(ScriptVar) == 0x4, "Incorrect struct size: ScriptVar");