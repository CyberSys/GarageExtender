// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct RwFileFunction	// sizeof = 0x2C
{
	DWORD field_0;
	DWORD rwfopen;
	DWORD rwfclose;
	DWORD rwfread;
	DWORD rwfwrite;
	DWORD rwfgets;
	DWORD field_18;
	DWORD rwfeof;
	DWORD rwfseek;
	DWORD field_24;
	DWORD rwftell;
};
#pragma pack(pop)

static_assert(sizeof(RwFileFunction) == 0x2C, "Incorrect struct size: RwFileFunction");