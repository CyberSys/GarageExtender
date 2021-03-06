// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CModelHier.h"


#pragma pack(push, 1)
struct CModelPeds	// sizeof = 0x44
{
	CModelHier __parent;
	DWORD animType;
	DWORD pedType;
	DWORD statType;
	WORD carMask;
	WORD pedFlags;
	DWORD field_34;
	BYTE radio1;
	BYTE radio2;
	BYTE pedModel;
	BYTE field_3B;
	WORD voiceType;
	WORD voice1;
	WORD voice2;
	WORD voice3;
};
#pragma pack(pop)

static_assert(sizeof(CModelPeds) == 0x44, "Incorrect struct size: CModelPeds");