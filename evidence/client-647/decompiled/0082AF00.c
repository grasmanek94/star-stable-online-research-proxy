__int64 __fastcall sub_14082AF00(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void *v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *i; // rdi
  __int128 v7; // xmm1
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  LPVOID lpMem[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  *(_OWORD *)lpMem = 0;
  v12 = 0;
  result = sub_140828F60(a1: a2, a2: lpMem);
  if ( (_BYTE)result != 0 )
  {
    v5 = lpMem[0];
    for ( i = lpMem[1]; v5 != i; v5 += 3 )
    {
      v7 = *(_OWORD *)v5;
      v13 = *(_OWORD *)v5;
      v14 = v5[2];
      v8 = *(_QWORD *)(a1 + 216);
      result = *(_QWORD *)(v8 + 8);
      v9 = v8;
      while ( *(_BYTE *)(result + 25) == 0 )
      {
        if ( *(_QWORD *)(result + 32) >= (unsigned __int64)v7 )
        {
          v9 = result;
          result = *(_QWORD *)result;
        }
        else
        {
          result = *(_QWORD *)(result + 16);
        }
      }
      if ( *(_BYTE *)(v9 + 25) == 0 && (unsigned __int64)v7 >= *(_QWORD *)(v9 + 32) && v9 != v8 )
      {
        v10 = sub_1405F1EE0(a1: v9 + 40);
        if ( v10 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_141024990) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        result = sub_14081DC00(a1: v10, a2: &v13);
      }
    }
  }
  else
  {
    result = sub_140059D90(
               a1: off_141025648,
               a2: "GardenCentre::CreateHybridResponse Failed to deserialize GardeningCreateHybridMessageResponse!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  if ( lpMem[0] != nullptr )
  {
    if ( (unsigned __int64)(24 * ((signed __int64)(v12 - (unsigned __int64)lpMem[0]) / 24)) < 0x1000 )
    {
      v4 = lpMem[0];
    }
    else
    {
      v4 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v4 - 8) > 0x1F )
        __fastfail(5u);
    }
    return sub_1409DB4C0(lpMem: v4);
  }
  return result;
}