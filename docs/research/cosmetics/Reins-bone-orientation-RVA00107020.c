// Hex-Rays export, baseline 645.348067; descriptive analysis label.
void __fastcall sub_140107020(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  char **v16; // rcx
  _BYTE v17[16]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 168) != 0 )
  {
    for ( i = sub_1405F8CF0(a1: a1 + 552); i != 0; i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 240LL))(a1: i) )
    {
      v5 = sub_14005D010(a1: v3, a2: v2);
      if ( (unsigned __int8)sub_14064F360(a1: i, a2: 33, a3: v5) != 0 )
        break;
    }
    v6 = sub_1405F8CF0(a1: a1 + 616);
    sub_1400EA230(a1: v6, a2: v18);
    v7 = v18[0];
    if ( v18[0] != 0 )
    {
      *(_BYTE *)(a1 + 168) = 0;
      if ( (*(_BYTE *)(v7 + 312) & 1) != 0 )
      {
        sub_140096450(a1: v17);
        v8 = 0;
        v9 = *(_QWORD *)(a1 + 632);
        if ( (*(_QWORD *)(a1 + 640) - v9) >> 4 != 0 )
        {
          while ( 1 )
          {
            if ( v8 >= (*(_QWORD *)(a1 + 640) - v9) >> 4 )
LABEL_17:
              __fastfail(5u);
            v10 = sub_1405F8CF0(a1: v9 + 16 * v8);
            if ( v10 == 0 )
              break;
            LOBYTE(v11) = 1;
            (*(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)v10 + 688LL))(
              a1: v10,
              a2: v17,
              a3: 1,
              a4: v11);
            ++v8;
            v9 = *(_QWORD *)(a1 + 632);
            if ( v8 >= (*(_QWORD *)(a1 + 640) - v9) >> 4 )
              goto LABEL_11;
          }
          v16 = off_140EFE978;
LABEL_21:
          if ( (unsigned __int8)sub_140059A00(a1: v16) != 0 )
            __debugbreak();
          sub_1409E7D98(a1: 999);
          __debugbreak();
        }
LABEL_11:
        v12 = 0;
        v13 = *(_QWORD *)(a1 + 656);
        if ( (*(_QWORD *)(a1 + 664) - v13) >> 4 != 0 )
        {
          while ( 1 )
          {
            if ( v12 >= (*(_QWORD *)(a1 + 664) - v13) >> 4 )
              goto LABEL_17;
            v14 = sub_1405F8CF0(a1: v13 + 16 * v12);
            if ( v14 == 0 )
              break;
            LOBYTE(v15) = 1;
            (*(void (__fastcall **)(__int64, _BYTE *, __int64, __int64))(*(_QWORD *)v14 + 688LL))(
              a1: v14,
              a2: v17,
              a3: 1,
              a4: v15);
            ++v12;
            v13 = *(_QWORD *)(a1 + 656);
            if ( v12 >= (*(_QWORD *)(a1 + 664) - v13) >> 4 )
              goto LABEL_15;
          }
          v16 = off_140EFE9D0;
          goto LABEL_21;
        }
      }
    }
LABEL_15:
    sub_14064F3F0(a1: v18[1]);
  }
}