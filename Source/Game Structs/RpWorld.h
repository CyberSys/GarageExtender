// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwObject.h"
#include "RwBBox.h"
#include "RpMaterialList.h"
#include "RwV3D.h"
#include "RwLinkList.h"


#pragma pack(push, 1)
struct RpWorld	// sizeof = 0x70
{
	RwObject object;
	DWORD flags;
	DWORD renderOrder;
	RpMaterialList matList;
	DWORD rootSector;
	DWORD numTexCoordSets;
	DWORD numClumpsInWorld;
	DWORD currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3D worldOrigin;
	RwBBox boundingBox;
	DWORD renderCallback;
	DWORD pipeline;
};
#pragma pack(pop)

static_assert(sizeof(RpWorld) == 0x70, "Incorrect struct size: RpWorld");