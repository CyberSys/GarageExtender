// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CTaskSimpleWaitUntilAreaCodesMatch.h"


#pragma pack(push, 1)
struct CTaskSimpleWaitForMatchingLeaderAreaCodes	// sizeof = 0x38
{
	CTaskSimpleWaitUntilAreaCodesMatch __parent;
	BYTE field_24;
	BYTE field_25[15];
	BYTE field_34;
	BYTE field_35[3];
};
#pragma pack(pop)

static_assert(sizeof(CTaskSimpleWaitForMatchingLeaderAreaCodes) == 0x38, "Incorrect struct size: CTaskSimpleWaitForMatchingLeaderAreaCodes");