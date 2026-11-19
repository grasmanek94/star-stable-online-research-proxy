__int64 __fastcall sub_140803EB0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  void *v7; // rdi
  __int64 *v8; // r15
  __int64 v9; // r12
  void *v10; // rcx
  LPVOID lpMem; // [rsp+20h] [rbp-E0h] BYREF
  void *v12; // [rsp+28h] [rbp-D8h]
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+44h] [rbp-BCh]
  LPVOID *p_lpMem; // [rsp+50h] [rbp-B0h]
  __m256i v17; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h] BYREF
  __int128 v20; // [rsp+98h] [rbp-68h]
  __int128 v21; // [rsp+A8h] [rbp-58h]
  __m256i v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+D8h] [rbp-28h]
  LPVOID v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+F0h] [rbp-10h]

  if ( a2[5] == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_14101B028) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v13[1] = a2[5];
  v14 = *((_DWORD *)a2 + 12);
  v15 = 0;
  v13[0] = &PXEngine::ByteStreamReader::`vftable';
  v17.m256i_i8[0] = 0;
  v17.m256i_i16[1] = 0;
  *(__int64 *)((char *)v17.m256i_i64 + 4) = 0xFFFFFFFF00000000uLL;
  *(_OWORD *)((char *)&v17.m256i_u64[1] + 4) = 0;
  sub_1409CB2E0(a1: &v18);
  DWORD2(v18) = 0;
  if ( (unsigned __int8)sub_140801400(a1: v13, a2: &v17) != 0 )
  {
    v5 = (unsigned int)(*((_DWORD *)a2 + 12) - v15);
    v6 = sub_1409DBF00(a1: v5);
    v7 = (void *)v6;
    if ( v6 != 0 )
      sub_140E827B0(a1: v6, a2: 0, a3: (unsigned int)v5);
    else
      v7 = nullptr;
    v12 = v7;
    if ( (_DWORD)v5 != 0 )
      sub_140083990(a1: v7, a2: a2[5] + (unsigned int)v15, a3: v5);
    v8 = *(__int64 **)(*(_QWORD *)a1 + 16LL);
    v9 = *v8;
    v12 = nullptr;
    p_lpMem = &lpMem;
    v19 = *a2;
    v20 = *(_OWORD *)(a2 + 1);
    v21 = *(_OWORD *)(a2 + 3);
    v22 = v17;
    v23 = v18;
    v10 = nullptr;
    lpMem = nullptr;
    v24 = v7;
    v25 = v5;
    if ( (_DWORD)v5 != 0 && v7 == nullptr )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_141018FF8) != 0 )
        __debugbreak();
      v10 = lpMem;
    }
    if ( v10 != nullptr )
      sub_1409DB4C0(lpMem: v10);
    lpMem = (LPVOID)19937;
    result = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 16))(a1: v8, a2: &v19);
    if ( v24 != nullptr )
      return sub_1409DB4C0(lpMem: v24);
  }
  else
  {
    result = sub_140059D90(a1: off_14101B0A0, a2: "NETWORK ERROR: Could not serialize packet header!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  return result;
}