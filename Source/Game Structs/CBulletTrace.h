// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"


#pragma pack(push, 1)
struct CBulletTrace	// sizeof = 0x2C
{
	RwV3D TransSIde;
	RwV3D YellowSide;
	BYTE existFlag;
	BYTE _pad[3];
	DWORD createdTime;
	DWORD disappearTime;
	DWORD Radius;
	BYTE alpha;
	BYTE _pad2[3];
};
#pragma pack(pop)

static_assert(sizeof(CBulletTrace) == 0x2C, "Incorrect struct size: CBulletTrace");