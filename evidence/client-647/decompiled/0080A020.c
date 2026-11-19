__int64 __fastcall sub_14080A020(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-39h] BYREF
  __int64 v10; // [rsp+28h] [rbp-31h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-19h]
  int v13; // [rsp+48h] [rbp-11h]
  char v14[2]; // [rsp+50h] [rbp-9h] BYREF
  __int16 v15; // [rsp+52h] [rbp-7h]
  int v16; // [rsp+54h] [rbp-5h]
  int v17; // [rsp+58h] [rbp-1h]
  __int128 v18; // [rsp+5Ch] [rbp+3h]
  __int64 v19; // [rsp+70h] [rbp+17h] BYREF
  int v20; // [rsp+78h] [rbp+1Fh]

  v14[0] = 0;
  v17 = -1;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  sub_1409CB2E0(a1: &v19);
  v6 = (*(_BYTE *)(a3 + 40) & 1) == 0;
  v15 = *(_WORD *)(a3 + 42);
  v16 = *(_DWORD *)(a3 + 44);
  v17 = *(_DWORD *)(a3 + 48);
  v18 = *(_OWORD *)(a3 + 52);
  v19 = *(_QWORD *)(a3 + 72);
  v20 = 0;
  v14[0] = 5;
  if ( v6 && (unsigned __int8)sub_140059CA0(a1: off_14101B320) != 0 )
    __debugbreak();
  v20 = *(_DWORD *)(a3 + 80);
  v11[1] = *(_QWORD *)(a1 + 136);
  v11[0] = (__int64)&PXEngine::PreallocatedByteStreamWriter::`vftable';
  v12 = 1500;
  v13 = 0;
  if ( sub_140801400(a1: v11, a2: (__int64)v14) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v9 = HIDWORD(v12);
    v10 = *(_QWORD *)(a1 + 136);
    if ( v8 == 0 )
    {
      sub_1409D2AC0(a1: 0);
      JUMPOUT(0x14080A159LL);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, int *))(*(_QWORD *)v8 + 16LL))(
             a1: v8,
             a2,
             a3: &v10,
             a4: &v9);
  }
  else
  {
    result = sub_140059D90(a1: off_14101B458, a2: "PXUdpMessageLayer: Failed Serialize Packet Header!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  return result;
}