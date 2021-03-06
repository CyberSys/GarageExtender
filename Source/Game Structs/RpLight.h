// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwRGBAReal.h"
#include "RwLinkList.h"
#include "RwLLLink.h"
#include "RwObjectHasFrame.h"


#pragma pack(push, 1)
struct RpLight	// sizeof = 0x40
{
	RwObjectHasFrame object;
	DWORD radius;
	RwRGBAReal color;
	DWORD minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	WORD lightFrame;
	WORD pad;
};
#pragma pack(pop)

static_assert(sizeof(RpLight) == 0x40, "Incorrect struct size: RpLight");