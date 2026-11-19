unsigned int *__fastcall sub_1407D9AD0(__int64 *a1, _DWORD *a2)
{
  __int64 *v2; // r9
  unsigned int v4; // r8d
  __int64 *v6; // rdx
  __int64 *i; // rax
  unsigned int *result; // rax
  unsigned int *v9; // r14
  __int64 v10; // rbx
  unsigned int *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  char v22; // si
  __int64 v23; // rdi
  int v24; // ebx
  __int64 v25; // rbx
  _BYTE v26[16]; // [rsp+40h] [rbp-78h] BYREF
  void **v27; // [rsp+50h] [rbp-68h] BYREF
  int v28; // [rsp+58h] [rbp-60h]
  int v29; // [rsp+5Ch] [rbp-5Ch]
  _QWORD v30[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-48h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h] BYREF

  v2 = (__int64 *)a1[239];
  v4 = a2[18];
  v6 = v2;
  for ( i = (__int64 *)v2[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= v4 )
      v6 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v6 + 25) != 0 || v4 < *((_DWORD *)v6 + 8) || v6 == v2 )
  {
    v28 = 0;
    v29 = 195948557;
  }
  else
  {
    sub_1405F1D40(a1: (__int64)&v27, a2: (__int64)(v6 + 5));
  }
  v27 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  result = (unsigned int *)sub_1405F1EE0(a1: (__int64)&v27);
  v9 = result;
  if ( result != nullptr )
  {
    v10 = sub_14005D330();
    result = (unsigned int *)sub_1405F1EE0(a1: (__int64)(v9 + 402));
    v11 = result;
    if ( result != nullptr )
    {
      result = (unsigned int *)sub_140645790(a1: result, a2: 120, a3: v10);
      if ( (_BYTE)result != 0 )
      {
        LOBYTE(v12) = 1;
        result = (unsigned int *)sub_1401E09C0(a1: v11, a2: v12);
        v13 = *result;
        if ( (_DWORD)v13 != *a2 )
        {
          v14 = *a1;
          v15 = sub_1400FBAF0(a1: v13);
          (*(void (__fastcall **)(__int64 *, __int64, unsigned int *, __int64))(v14 + 776))(
            a1,
            a2: 122135,
            a3: v9,
            a4: v15);
          v18 = sub_1400AF100(a1: v17, a2: v16);
          sub_1400C5F00(a1: v9, a2: v26, a3: v18);
          v19 = (__int128 *)sub_1400C5FC0(a1: v9);
          v20 = qword_14138A6F0;
          v32 = *v19;
          if ( qword_14138A6F0 == 0 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          sub_1405F1D40(a1: (__int64)v31, a2: (__int64)(v9 + 30));
          v21 = sub_1405FC3A0(a1: v20, a2: v30, a3: v31, a4: 120);
          if ( sub_1405F1EE0(a1: v21) != 0 )
            (*(void (__fastcall **)(unsigned int *, _BYTE *, __int128 *))(*(_QWORD *)v9 + 976LL))(
              a1: v9,
              a2: v26,
              a3: &v32);
          v22 = sub_14078A4B0(a1: v9);
          v23 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v11 + 176LL))(a1: v11);
          sub_1405F1D40(a1: (__int64)v31, a2: (__int64)(v11 + 8));
          v31[0] = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
          v24 = sub_1405F1EE0(a1: (__int64)v31);
          sub_1405F1D40(a1: (__int64)v30, a2: (__int64)&v27);
          v30[0] = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
          v25 = sub_1401DAB30(a1: 2, (_DWORD)a2, a3: (unsigned int)v30, a4: v24, a5: v23, a6: v22, a7: 0);
          sub_1400AF390(a1: v11);
          (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v9 + 968LL))(a1: v9, a2: v25);
          return (unsigned int *)sub_14079A970(a1: v9, a2: v25);
        }
      }
    }
  }
  return result;
}