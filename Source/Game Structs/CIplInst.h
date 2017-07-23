// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RtQuat.h"
#include "RwV3D.h"


#pragma pack(push, 1)
struct CIplInst	// sizeof = 0x28
{
	RwV3D position;
	RtQuat rotation;
	DWORD modelID;
	DWORD interiorID;
	DWORD lod;
};
#pragma pack(pop)

static_assert(sizeof(CIplInst) == 0x28, "Incorrect struct size: CIplInst");