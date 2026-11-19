__int64 __fastcall sub_1407CAF80(__int64 a1, int a2, __int64 *a3)
{
  _QWORD *v6; // rsi
  __int64 *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // bl
  __int64 v11; // rax
  char **v12; // rcx
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v14; // [rsp+68h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 556) = a2;
  if ( a2 == 0 )
  {
    if ( *((_BYTE *)a3 + 64) == 0 )
    {
      v12 = off_141014F40;
      goto LABEL_38;
    }
    v6 = (_QWORD *)(a1 + 384);
    if ( (__int64 *)(a1 + 384) != a3 )
    {
      if ( (unsigned __int64)a3[3] <= 0xF )
        v7 = a3;
      else
        v7 = (__int64 *)*a3;
      sub_14000D680(a1: a1 + 384, a2: v7, a3: a3[2]);
    }
    if ( *(_QWORD *)(a1 + 408) > 0xFu )
      v6 = (_QWORD *)*v6;
    sub_140607FB0(a1: 21, a2: v6);
    if ( qword_14138AA40 == 0 )
    {
      v12 = off_140F38D90;
      goto LABEL_38;
    }
    if ( *((_BYTE *)a3 + 64) == 0 )
      sub_14001B1B0();
    sub_1406085E0(a1: qword_14138AA40, a2: (char *)a3 + 34, a3: a3 + 4);
    if ( qword_14138AA40 == 0 )
    {
      v12 = off_140F38D90;
      goto LABEL_38;
    }
    if ( (unsigned __int8)sub_140608600(a1: qword_14138AA40, a2: 5) != 0 )
    {
      if ( qword_14138A6F0 == 0 )
        goto LABEL_37;
      sub_1405FA540();
    }
    if ( *(_QWORD *)&nExitCode == 0 )
    {
      v12 = off_140F34FA8;
      goto LABEL_38;
    }
    sub_14063DB90(a1: *(_QWORD *)(*(_QWORD *)&nExitCode + 688LL));
    if ( *((_BYTE *)a3 + 64) == 0 )
      __fastfail(5u);
    sub_14019E730(a1: &v14, a2: v8, a3: v9, a4: 0);
    v10 = sub_1400CCAD0(a1, a2: 122140);
    if ( v10 == 0 )
      goto LABEL_26;
    if ( qword_14138A6F0 != 0 )
    {
      sub_1405F7680(a1: qword_14138A6F0, a2: *(unsigned __int8 *)(a1 + 713));
LABEL_26:
      if ( qword_14138A6F0 != 0 )
      {
        sub_140605460(a1: qword_14138A6F0, a2: v14);
        if ( qword_14138A6F0 != 0 )
        {
          sub_140605380(a1: qword_14138A6F0, a2: v14);
          if ( v10 != 0 )
            return sub_1407D4850(a1);
          v11 = sub_1402B5B10(a1: &unk_141313C18, a2: v13);
          return sub_1407D6C20(a1, a2: v11);
        }
      }
    }
LABEL_37:
    v12 = off_140F35058;
LABEL_38:
    if ( (unsigned __int8)sub_140059CA0(a1: v12) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( *(_BYTE *)(a1 + 448) < 3u && a2 == 3060 )
  {
    *(_DWORD *)(a1 + 316) = 10;
    *(_DWORD *)(a1 + 320) = 1092616192;
    return 10;
  }
  else
  {
    *(_DWORD *)(a1 + 316) = 8;
    *(_DWORD *)(a1 + 320) = 1065353216;
    return 8;
  }
}