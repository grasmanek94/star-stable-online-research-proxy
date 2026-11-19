unsigned __int64 __fastcall sub_1401D5F20(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 result; // rax
  __int64 v6; // kr08_8
  int v7; // eax
  int v8; // ecx
  float v9; // xmm1_4
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 2872) == 0
    || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 2848)
                       + 8 * ((*(_QWORD *)(a1 + 2872) - 1LL + *(_QWORD *)(a1 + 2864)) & (*(_QWORD *)(a1 + 2856) - 1LL))),
        result = (unsigned int)(*(_DWORD *)(a2 + 64) - *(_DWORD *)(v4 + 64)),
        *(_DWORD *)(a2 + 64) - *(_DWORD *)(v4 + 64) > 0) )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 64) - *(_DWORD *)(a1 + 2952));
    if ( *(_DWORD *)(a2 + 64) - *(_DWORD *)(a1 + 2952) > 0 || (*(_BYTE *)(a1 + 3543) & 8) != 0 )
    {
      if ( *(_BYTE *)(a1 + 2956) != 0 )
      {
        if ( ++*(_BYTE *)(a1 + 2964) > 0xAu )
        {
          *(_BYTE *)(a1 + 2956) = 0;
          sub_1401FF220(a1: a1 + 2840);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 864LL))(a1, a2);
          *(_DWORD *)(a1 + 2828) = 0;
          return result;
        }
        if ( (unsigned int)(*(_QWORD *)sub_14009B080(a1: &v14) / 1000000LL) - *(_DWORD *)(a1 + 2960) >= 0xA )
        {
          *(_BYTE *)(a1 + 2956) = 0;
          sub_1401FF220(a1: a1 + 2840);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 864LL))(a1, a2);
          *(_DWORD *)(a1 + 2828) = 0;
          return result;
        }
        *(_BYTE *)(a1 + 3543) |= 8u;
      }
      if ( (*(_BYTE *)(a1 + 3543) & 8) != 0 )
      {
        *(_BYTE *)(a1 + 2956) = 1;
        sub_1401FF220(a1: a1 + 2840);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 864LL))(a1, a2);
        *(_BYTE *)(a1 + 3543) &= ~8u;
        v6 = *(_QWORD *)sub_14009B080(a1: &v14);
        *(_DWORD *)(a1 + 2960) = v6 / 1000000;
        return (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 3068);
        if ( v7 != 0 )
        {
          v8 = *(_DWORD *)(a2 + 64) - v7;
          if ( (unsigned int)(v8 - 50) <= 0x2BC )
          {
            v9 = (float)*(int *)(a1 + 3064);
            if ( (float)((float)v8 / v9) < 2.0 )
              *(_DWORD *)(a1 + 3064) = (int)(float)((float)(v9 * 0.69999999) + (float)((float)v8 * 0.30000001));
            else
              *(_DWORD *)(a1 + 3064) = v8;
          }
        }
        *(_DWORD *)(a1 + 3068) = *(_DWORD *)(a2 + 64);
        if ( *(_QWORD *)(a1 + 2856) <= (unsigned __int64)(*(_QWORD *)(a1 + 2872) + 1LL) )
          sub_1401FEFF0(a1: a1 + 2840, a2: 1);
        v10 = *(_QWORD *)(a1 + 2856) - 1LL;
        *(_QWORD *)(a1 + 2864) &= v10;
        v11 = *(_QWORD *)(a1 + 2864) + *(_QWORD *)(a1 + 2872);
        v12 = v11 & v10;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 2848) + 8 * v12) == 0 )
          *(_QWORD *)(*(_QWORD *)(a1 + 2848) + 8 * v12) = sub_1409DB470(a1: 68);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 2848) + 8 * (v11 & (*(_QWORD *)(a1 + 2856) - 1LL)));
        *(_OWORD *)v13 = *(_OWORD *)a2;
        *(_OWORD *)(v13 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v13 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v13 + 48) = *(_OWORD *)(a2 + 48);
        result = *(unsigned int *)(a2 + 64);
        *(_DWORD *)(v13 + 64) = result;
        ++*(_QWORD *)(a1 + 2872);
      }
    }
  }
  return result;
}