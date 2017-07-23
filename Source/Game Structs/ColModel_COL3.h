// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"


#pragma pack(push, 1)
struct ColModel_COL3	// sizeof = 0x58
{
	RwV3D min;
	RwV3D max;
	RwV3D center;
	DWORD radius;
	WORD numberOfSpheres;
	WORD numberOfBoxes;
	DWORD numberOfFaces;
	DWORD flags;
	DWORD offsetSperes;
	DWORD offsetBoxes;
	DWORD offset1;
	DWORD offsetMeshVertices;
	DWORD offsetMeshFaces;
	DWORD offset2;
	DWORD numberOfShadowMeshFaces;
	DWORD offsetShadowMeshVertices;
	DWORD offsetShadowMeshFaces;
};
#pragma pack(pop)

static_assert(sizeof(ColModel_COL3) == 0x58, "Incorrect struct size: ColModel_COL3");