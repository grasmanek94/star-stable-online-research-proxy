__int64 __fastcall sub_1404E0F40(__int64 *a1, _DWORD *a2)
{
  char v2; // si
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 *v9; // r8
  __int64 *v10; // rcx
  __int64 *i; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  char v23; // [rsp+28h] [rbp-18h]
  __int16 v24; // [rsp+29h] [rbp-17h]
  unsigned __int8 v25; // [rsp+2Bh] [rbp-15h]
  __int64 v26; // [rsp+2Ch] [rbp-14h]
  unsigned __int16 v27; // [rsp+34h] [rbp-Ch]
  unsigned __int16 v28; // [rsp+68h] [rbp+28h] BYREF
  int v29; // [rsp+70h] [rbp+30h] BYREF
  int v30; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v22 = 0;
  v23 = 0;
  v26 = 0;
  v27 = 0;
  if ( (unsigned __int8)sub_1404DDBB0(a1: a2, a2: &v22) == 0 )
    goto LABEL_40;
  v29 = v26;
  if ( sub_1401D0820(a1: a2, a2: &v29) == 0 )
    goto LABEL_40;
  LODWORD(v26) = v29;
  v30 = HIDWORD(v26);
  if ( sub_1401D0820(a1: a2, a2: &v30) == 0 )
    goto LABEL_40;
  HIDWORD(v26) = v30;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v28 = 0;
    if ( sub_1402D2B10(a1: a2, a2: &v28) != 0 )
    {
      v27 = v28;
      goto LABEL_8;
    }
LABEL_40:
    result = sub_140059D90(
               a1: off_140FB17C0,
               a2: "RewardManager::PledgeUpdateReponse Failed to deserialize PledgingUpdatePledgeMessageResponse!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
    return result;
  }
  v28 = v27;
  if ( sub_1402D2B10(a1: a2, a2: &v28) == 0 )
    goto LABEL_40;
LABEL_8:
  v5 = a1[33];
  v6 = v26;
  v7 = v5;
  for ( result = *(_QWORD *)(v5 + 8); *(_BYTE *)(result + 25) == 0; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 32) >= (unsigned int)v26 )
      v7 = result;
    else
      result += 16;
  }
  if ( *(_BYTE *)(v7 + 25) == 0 && (unsigned int)v26 >= *(_DWORD *)(v7 + 32) && v7 != v5 )
  {
    if ( (_DWORD)v22 != 0 )
    {
      v9 = *(__int64 **)(v7 + 40);
      v10 = v9;
      for ( i = (__int64 *)v9[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 7) >= (unsigned int)v22 )
          v10 = i;
        else
          i += 2;
      }
      if ( *((_BYTE *)v10 + 25) != 0 || (unsigned int)v22 < *((_DWORD *)v10 + 7) || v10 == v9 )
      {
        result = sub_1404DF830(a1: v7 + 40, a2: &v22);
        *(_QWORD *)result = v22;
        *(_BYTE *)(result + 8) = v23;
        *(_WORD *)(result + 9) = v24;
        *(_BYTE *)(result + 11) = v25;
      }
      else
      {
        if ( *((_BYTE *)v10 + 40) == 0 && v23 != 0 )
          v2 = 1;
        v10[4] = v22;
        *((_BYTE *)v10 + 40) = v23;
        *(_WORD *)((char *)v10 + 41) = v24;
        result = v25;
        *((_BYTE *)v10 + 43) = v25;
      }
      v6 = v26;
    }
    *((_DWORD *)a1 + 70) = v6;
    if ( v27 == 354 )
    {
      v18 = *a1;
      v19 = sub_1400FBAF0(a1: (unsigned int)v27 - 354);
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v18 + 776))(
                 a1,
                 a2: 333020,
                 a3: 0,
                 a4: v19);
    }
    else
    {
      v12 = (unsigned int)v27 - 355;
      if ( v27 == 355 )
      {
        *(_BYTE *)(v7 + 64) &= ~1u;
        *(_DWORD *)(v7 + 60) = HIDWORD(v26);
        v16 = *a1;
        v17 = sub_1400FBAF0(a1: v12);
        return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v16 + 776))(
                 a1,
                 a2: 333019,
                 a3: 0,
                 a4: v17);
      }
      v13 = (unsigned int)v27 - 356;
      if ( v27 != 356 )
      {
        if ( v27 == 357 )
        {
          v14 = *a1;
          v15 = sub_1400FBAF0(a1: v13);
          return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v14 + 776))(
                   a1,
                   a2: 333022,
                   a3: 0,
                   a4: v15);
        }
        return result;
      }
    }
    if ( v2 != 0 )
    {
      v20 = *a1;
      v21 = sub_1400FBAF0(a1: v13);
      return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v20 + 776))(
               a1,
               a2: 333021,
               a3: 0,
               a4: v21);
    }
  }
  return result;
}