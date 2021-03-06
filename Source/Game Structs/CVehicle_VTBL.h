// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CPhysical_VTBL.h"


#pragma pack(push, 1)
struct CVehicle_VTBL	// sizeof = 0x108
{
	CPhysical_VTBL v;
	DWORD ProcessControlCollisionCheck;
	DWORD ProcessControlInputs;
	DWORD GetComponentWorldPosition;
	DWORD IsComponentPresent;
	DWORD OpenDoor;
	DWORD ProcessOpenDoor;
	DWORD GetDoorAngleOpenRatio;
	DWORD GetDoorAngleOpenRatio_;
	DWORD IsDoorReady;
	DWORD IsDoorReady_;
	DWORD IsDoorFullyOpen;
	DWORD IsDoorFullyOpen_;
	DWORD IsDoorClosed;
	DWORD IsDoorClosed_;
	DWORD IsDoorMissing;
	DWORD IsDoorMissing_;
	DWORD IsOpenTopCar;
	DWORD RemoveRefsToVehicle;
	DWORD BlowUpCar;
	DWORD BlowUpCarCutSceneNoExtras;
	DWORD SetUpWheelColModel;
	DWORD BurstTyre;
	DWORD IsRoomForPedToLeaveCar;
	DWORD ProcessDrivingAnims;
	DWORD GetRideAnimData;
	DWORD SetupSuspensionLines;
	DWORD AddMovingCollisionSpeed;
	DWORD Fix;
	DWORD SetupDamageAfterLoad;
	DWORD DoBurstAndSoftGroundRatios;
	DWORD GetHeightAboveRoad;
	DWORD PlayCarHorn;
	DWORD GetNumContactWheels;
	DWORD VehicleDamage;
	DWORD CanPedStepOutCar;
	DWORD CanPedJumpOutCar;
	DWORD GetTowHitchPos;
	DWORD GetTowbarPos;
	DWORD SetTowLink;
	DWORD BreakTowLink;
	DWORD FindWheelWidth;
	DWORD Save;
	DWORD Load;
};
#pragma pack(pop)

static_assert(sizeof(CVehicle_VTBL) == 0x108, "Incorrect struct size: CVehicle_VTBL");