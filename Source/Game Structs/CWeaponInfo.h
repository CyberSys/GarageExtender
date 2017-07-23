// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"


#pragma pack(push, 1)
struct CWeaponInfo	// sizeof = 0x70
{
	DWORD m_eFireType;
	DWORD m_fTargetRange;
	DWORD m_fWeaponRange;
	DWORD m_modelId;
	DWORD m_modelId2;
	DWORD m_nWeaponSlot;
	DWORD m_nFlags;
	DWORD m_animGroup;
	WORD m_nAmmo;
	WORD m_nDamage;
	RwV3D m_vecFireOffset;
	DWORD m_SkillLevel;
	DWORD m_nReqStatLevel;
	DWORD m_fAccuracy;
	DWORD m_fMoveSpeed;
	DWORD m_animLoopStart;
	DWORD m_animLoopEnd;
	DWORD m_animFireTime;
	DWORD m_anim2LoopStart;
	DWORD m_anim2LoopEnd;
	DWORD m_anim2FireTime;
	DWORD m_animBreakoutTime;
	DWORD m_fSpeed;
	DWORD m_fRadius;
	DWORD m_fLifeSpan;
	DWORD m_fSpread;
	WORD m_nAimOffsetIndex;
	BYTE m_defaultCombo;
	BYTE m_nCombosAvailable;
};
#pragma pack(pop)

static_assert(sizeof(CWeaponInfo) == 0x70, "Incorrect struct size: CWeaponInfo");