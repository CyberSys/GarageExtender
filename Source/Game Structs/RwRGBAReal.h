// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct RwRGBAReal	// sizeof = 0x10
{
	DWORD red;
	DWORD green;
	DWORD blue;
	DWORD alpha;
};
#pragma pack(pop)

static_assert(sizeof(RwRGBAReal) == 0x10, "Incorrect struct size: RwRGBAReal");