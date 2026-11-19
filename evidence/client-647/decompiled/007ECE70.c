char __fastcall sub_1407ECE70(__int64 a1, unsigned int a2, int *a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  char result; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax
  _BYTE *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 *v28; // r14
  __int64 *v29; // rsi
  __int64 *i; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  int v34; // eax
  int v35; // [rsp+20h] [rbp-B8h] BYREF
  char v36; // [rsp+24h] [rbp-B4h]
  _QWORD v37[3]; // [rsp+28h] [rbp-B0h] BYREF
  int v38; // [rsp+40h] [rbp-98h]
  __int16 v39; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v40[48]; // [rsp+50h] [rbp-88h] BYREF
  __int16 v41; // [rsp+80h] [rbp-58h]
  _BYTE v42[80]; // [rsp+88h] [rbp-50h] BYREF

  if ( a2 > 0x1DCB2 )
  {
    v20 = a2 - 122035;
    if ( v20 != 0 )
    {
      v21 = v20 - 1;
      if ( v21 == 0 )
      {
        sub_1407EBB10();
        return 1;
      }
      if ( v21 != 1 )
        return 0;
      v22 = *(_QWORD *)(a1 + 360);
      v23 = *(unsigned int *)(a1 + 432);
      if ( v23 < (*(_QWORD *)(a1 + 368) - v22) >> 3 )
      {
        v24 = *(_QWORD *)(v22 + 8 * v23);
        if ( *(_BYTE *)(v24 + 164) != 6 )
        {
          v25 = sub_1405F1EE0(a1: a1 + 72);
          if ( v25 != 0 )
            sub_1400C2A20(a1: v25);
        }
        v35 = *(_DWORD *)(v24 + 160);
        v36 = *(_BYTE *)(v24 + 164);
        v26 = sub_1405F1EE0(a1: a1 + 344);
        if ( v26 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F61968) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v27 = sub_1407E9A90(a1: &unk_141313CA0, a2: &v39, a3: &v35);
        sub_1407D6C20(a1: v26, a2: v27);
        v28 = *(__int64 **)(a1 + 368);
        v29 = (__int64 *)(*(_QWORD *)(a1 + 360) + 8LL * *(unsigned int *)(a1 + 432));
        for ( i = v29 + 1; i != v28; ++i )
        {
          v31 = *i;
          *i = 0;
          v32 = *v29;
          *v29 = v31;
          if ( v32 != 0 )
            sub_1407E9B60(a1: v29);
          ++v29;
        }
        v33 = *(_QWORD *)(a1 + 368);
        if ( *(_QWORD *)(v33 - 8) != 0 )
          sub_1407E9B60(a1: v33 - 8);
        *(_QWORD *)(v33 - 8) = 19937;
        *(_QWORD *)(a1 + 368) -= 8LL;
        v34 = *(_DWORD *)(a1 + 432);
        if ( v34 != 0 )
          *(_DWORD *)(a1 + 432) = v34 - 1;
        if ( *(_QWORD *)(a1 + 360) == *(_QWORD *)(a1 + 368) )
        {
          *(_DWORD *)(a1 + 432) = -1;
          return 1;
        }
      }
    }
    else
    {
      sub_1407EE0A0();
    }
    return 1;
  }
  if ( a2 != 122034 )
  {
    v7 = a2 - 40200;
    if ( v7 == 0 )
    {
      if ( (unsigned __int8)sub_1407E9C70(a1: a1 + 8) != 0 && a4 == sub_1405F1EE0(a1: a1 + 24) )
      {
        *a3 = (__int64)(*(_QWORD *)(a1 + 368) - *(_QWORD *)(a1 + 360)) >> 3;
        return 1;
      }
      return 0;
    }
    v8 = v7 - 2;
    if ( v8 != 0 )
    {
      v9 = v8 - 1;
      if ( v9 != 0 )
      {
        if ( v9 == 1 && (unsigned __int8)sub_1407E9C70(a1: a1 + 8) != 0 && a4 == sub_1405F1EE0(a1: a1 + 24) )
        {
          *a3 = *(_DWORD *)(a1 + 432);
          return 1;
        }
      }
      else if ( (unsigned __int8)sub_1407E9C70(a1: a1 + 8) != 0 && a4 == sub_1405F1EE0(a1: a1 + 24) )
      {
        *(_DWORD *)(a1 + 432) = *a3;
        sub_1407ED500(a1);
        return 1;
      }
      return 0;
    }
    if ( (unsigned __int8)sub_1407E9C70(a1: a1 + 8) != 0 && a4 == sub_1405F1EE0(a1: a1 + 24) )
    {
      v11 = *(_QWORD *)(a1 + 360);
      v12 = (unsigned int)a3[1];
      if ( v12 >= (*(_QWORD *)(a1 + 368) - v11) >> 3 )
        __fastfail(5u);
      v13 = *a3;
      v14 = *(_BYTE **)(v11 + 8 * v12);
      if ( *a3 != 0 )
      {
        if ( v13 == 1 )
        {
          *((_QWORD *)a3 + 1) = sub_140080FF0(a1: v14 + 96, a2: 0);
          return 1;
        }
        else
        {
          if ( v13 == 2 )
            *((_QWORD *)a3 + 1) = sub_140080FF0(a1: v14 + 112, a2: 0);
          else
            *((_QWORD *)a3 + 1) = sub_140080FF0(a1: v14 + 144, a2: 0);
          return 1;
        }
      }
      else
      {
        switch ( v14[164] )
        {
          case 0:
          case 2:
          case 4:
            a3[6] = 0;
            if ( v14[188] == 0 )
              return 1;
            a3[6] = 1;
            result = 1;
            break;
          case 1:
          case 3:
          case 5:
            a3[6] = 2;
            if ( v14[189] == 0 )
              return 1;
            a3[6] = 3;
            result = 1;
            break;
          case 6:
            a3[6] = 4;
            if ( v14[188] == 0 )
              return 1;
            a3[6] = 5;
            result = 1;
            break;
          default:
            return 1;
        }
      }
      return result;
    }
    return 0;
  }
  v15 = sub_1405F1EE0(a1: a1 + 344);
  if ( v15 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F61968) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v16 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  v17 = v16;
  if ( v16 == 0 )
    return 1;
  if ( *(_BYTE *)(v16 + 2012) == 0 && (unsigned __int8)sub_140059CA0(a1: off_140F45C48) != 0 )
    __debugbreak();
  if ( *(_BYTE *)(v17 + 2012) == 3
    || *(_BYTE *)(v15 + 480) == 0
    || *(_BYTE *)(a1 + 436) != 0
    || *(_BYTE *)(a1 + 437) != 0 )
  {
    return 1;
  }
  *(_BYTE *)(a1 + 437) = 1;
  if ( (unsigned __int8)sub_1407E9C70(a1: a1 + 8) != 0 )
  {
    v18 = sub_140152800(a1: a1 + 40);
    sub_1400C29E0(a1: v18);
    v19 = sub_140152800(a1: a1 + 56);
    sub_140148000(a1: v19, a2: 0);
  }
  v37[0] = &PXEngine::ByteStreamWriter::`vftable';
  v41 = word_141313C9C;
  v37[1] = 0;
  v37[2] = 0;
  v38 = 0;
  sub_140A255B0(a1: v42, a2: v37);
  v39 = v41;
  sub_140A255B0(a1: v40, a2: v42);
  v40[32] = 1;
  sub_140A25690(a1: v42);
  sub_140A25690(a1: v37);
  sub_1407D6C20(a1: v15, a2: &v39);
  return 1;
}