__int64 __fastcall sub_140808E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v8; // r8d
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h]
  int v13; // [rsp+50h] [rbp-19h]
  __int64 v14; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v15[2]; // [rsp+60h] [rbp-9h] BYREF
  __int16 v16; // [rsp+62h] [rbp-7h]
  int v17; // [rsp+64h] [rbp-5h]
  int v18; // [rsp+68h] [rbp-1h]
  __int128 v19; // [rsp+6Ch] [rbp+3h]
  __int64 v20; // [rsp+80h] [rbp+17h] BYREF
  int v21; // [rsp+88h] [rbp+1Fh]

  if ( *(_DWORD *)a4 == 0 )
    return sub_140809340();
  v8 = *(_DWORD *)(a4 + 48);
  if ( v8 > 0x400 )
  {
    result = sub_140059D90(
               a1: off_14101B6C8,
               a2: "Message size of %u bytes is too large for an unreliable packet for message #%d, max is %u bytes!",
               v8,
               *(unsigned __int16 *)(a4 + 4),
               1024);
    if ( (_BYTE)result == 0 )
      return result;
LABEL_11:
    __debugbreak();
  }
  v11[1] = *(_QWORD *)(a1 + 136);
  v11[0] = (__int64)&PXEngine::PreallocatedByteStreamWriter::`vftable';
  v12 = 1500;
  v13 = 0;
  v15[0] = 0;
  v16 = 0;
  v17 = 0;
  v18 = -1;
  v19 = 0;
  sub_1409CB2E0(a1: &v20);
  v16 = *(_WORD *)(a4 + 4);
  v17 = *(_DWORD *)(a4 + 12);
  v18 = *(_DWORD *)(a4 + 8);
  v19 = *(_OWORD *)(a4 + 16);
  v20 = *(_QWORD *)(a4 + 32);
  v21 = 0;
  v15[0] = 0;
  if ( sub_140801400(a1: v11, a2: (__int64)v15) != 0 )
  {
    if ( (unsigned __int8)sub_140A4C2A0(a1: v11, a2: *(_QWORD *)(a4 + 40), a3: *(unsigned int *)(a4 + 48)) != 0 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 8LL))(a1: *(_QWORD *)(a1 + 368));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 8LL))(a1: *(_QWORD *)(a1 + 352));
      v9 = *(_QWORD *)(a1 + 64);
      v10 = HIDWORD(v12);
      v14 = *(_QWORD *)(a1 + 136);
      if ( v9 == 0 )
      {
        sub_1409D2AC0(a1: 0);
        JUMPOUT(0x14080904ELL);
      }
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, int *))(*(_QWORD *)v9 + 16LL))(
               a1: v9,
               a2,
               a3: &v14,
               a4: &v10);
    }
    else
    {
      result = sub_140059D90(a1: off_14101B750, a2: "PXUdpMessageLayer: Failed To Write Payload!");
      if ( (_BYTE)result != 0 )
        goto LABEL_11;
    }
  }
  else
  {
    result = sub_140059D90(a1: off_14101B728, a2: "Serialize Packet Header!");
    if ( (_BYTE)result != 0 )
      goto LABEL_11;
  }
  return result;
}