// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"


#pragma pack(push, 1)
struct CObjectInfo	// sizeof = 0x50
{
	DWORD fMass;
	DWORD fTurnMass;
	DWORD fAirResistance;
	DWORD fElasticity;
	DWORD fBuoyancyConstant;
	DWORD fUprootLimit;
	DWORD fColDamageMultiplier;
	BYTE colDamageEffect;
	BYTE specialColResponseCase;
	BYTE cameraAvoidObject;
	BYTE causesExplosion;
	BYTE fxType;
	BYTE field_21;
	BYTE field_22;
	BYTE field_23;
	RwV3D fxOffset;
	DWORD field_30;
	DWORD field_34;
	RwV3D breakVelocity;
	DWORD fBreakVelocityRand;
	DWORD fSmashMultiplier;
	DWORD sparksOnImpact;
};
#pragma pack(pop)

static_assert(sizeof(CObjectInfo) == 0x50, "Incorrect struct size: CObjectInfo");