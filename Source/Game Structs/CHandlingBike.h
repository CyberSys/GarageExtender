// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CHandlingBike	// sizeof = 0x40
{
	DWORD index;
	DWORD leanFwdCOM;
	DWORD leanFwdForce;
	DWORD leanBakCOM;
	DWORD leanBakForce;
	DWORD maxLean;
	DWORD fullAnimLean;
	DWORD desLean;
	DWORD speedSteer;
	DWORD slipSteer;
	DWORD noPlayerCOMz;
	DWORD wheelieAng;
	DWORD stoppieAng;
	DWORD wheelieSteer;
	DWORD wheelieStabMult;
	DWORD stoppieStabMult;
};
#pragma pack(pop)

static_assert(sizeof(CHandlingBike) == 0x40, "Incorrect struct size: CHandlingBike");