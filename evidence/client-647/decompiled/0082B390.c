__int64 __fastcall sub_14082B390(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 *v7; // r9
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  void *v12; // rax
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( (unsigned __int8)sub_1408292E0(a1: a2, a2: &v13) != 0
    && (unsigned __int8)sub_140829120(a1: a2, a2: (char *)&v14 + 8) != 0 )
  {
    v4 = 0;
    v5 = *((_QWORD *)&v13 + 1);
    v6 = v13;
    if ( (__int64)(*((_QWORD *)&v13 + 1) - v13) >> 3 != 0 )
    {
      while ( (unsigned int)v4 < (unsigned __int64)((v5 - v6) >> 3) )
      {
        v7 = *(__int64 **)(a1 + 216);
        v8 = (__int64 *)v7[1];
        v9 = v7;
        while ( *((_BYTE *)v8 + 25) == 0 )
        {
          if ( (unsigned __int64)v8[4] >= *(_QWORD *)(v6 + 8 * v4) )
          {
            v9 = v8;
            v8 = (__int64 *)*v8;
          }
          else
          {
            v8 = (__int64 *)v8[2];
          }
        }
        if ( *((_BYTE *)v9 + 25) == 0 && *(_QWORD *)(v6 + 8 * v4) >= (unsigned __int64)v9[4] && v9 != v7 )
        {
          v10 = sub_1405F1EE0(a1: (__int64)(v9 + 5));
          if ( v10 == 0 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_141024990) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          if ( (unsigned int)v4 >= (unsigned __int64)(((_QWORD)v15 - *((_QWORD *)&v14 + 1)) / 24LL) )
            break;
          sub_14081DD50(a1: v10, a2: *((_QWORD *)&v14 + 1) + 24 * v4);
          v5 = *((_QWORD *)&v13 + 1);
          v6 = v13;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= (unsigned __int64)((v5 - v6) >> 3) )
          goto LABEL_21;
      }
      __fastfail(5u);
    }
  }
  else if ( (unsigned __int8)sub_140059D90(
                               a1: off_141024F88,
                               a2: "GardenCentre::FetchGardenResponse Failed to deserialize GardeningFetchGardenResponse!") != 0 )
  {
    __debugbreak();
  }
LABEL_21:
  result = sub_14082AA40(a1: (char *)&v14 + 8);
  if ( (_QWORD)v13 != 0 )
  {
    if ( (unsigned __int64)(8 * ((__int64)(v14 - v13) >> 3)) < 0x1000 )
    {
      v12 = (void *)v13;
    }
    else
    {
      v12 = *(void **)(v13 - 8);
      if ( (unsigned __int64)(v13 - (_QWORD)v12 - 8) > 0x1F )
        __fastfail(5u);
    }
    return sub_1409DB4C0(lpMem: v12);
  }
  return result;
}