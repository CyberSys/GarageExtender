// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CClothesInfo	// sizeof = 0x78
{
	DWORD modelHash[10];
	DWORD textureHash[18];
	DWORD field_70;
	DWORD field_74;
};
#pragma pack(pop)

static_assert(sizeof(CClothesInfo) == 0x78, "Incorrect struct size: CClothesInfo");