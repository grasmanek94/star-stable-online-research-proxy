char __fastcall sub_1402B8400(__int64 a1, __int64 a2)
{
  char result; // al
  void *v5; // rax
  void *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-79h] BYREF
  __int64 v8; // [rsp+28h] [rbp-71h]
  __int64 v9; // [rsp+30h] [rbp-69h]
  __int64 v10; // [rsp+38h] [rbp-61h]
  __int64 v11; // [rsp+40h] [rbp-59h]
  __int64 v12; // [rsp+48h] [rbp-51h]
  __int64 v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  __int64 v15; // [rsp+60h] [rbp-39h]
  __int64 v16; // [rsp+68h] [rbp-31h]
  __int64 v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  __int128 v19; // [rsp+80h] [rbp-19h] BYREF
  __int128 v20; // [rsp+90h] [rbp-9h] BYREF
  __int128 v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+B0h] [rbp+17h]
  __int64 v23; // [rsp+B8h] [rbp+1Fh]
  __int64 v24; // [rsp+C0h] [rbp+27h]
  __int64 v25; // [rsp+C8h] [rbp+2Fh]
  __int64 v26; // [rsp+D0h] [rbp+37h]
  __int64 v27; // [rsp+D8h] [rbp+3Fh]
  __int64 v28; // [rsp+E0h] [rbp+47h]
  char v29; // [rsp+100h] [rbp+67h] BYREF
  __int64 v30; // [rsp+108h] [rbp+6Fh] BYREF

  v29 = *(_BYTE *)(a2 + 144);
  result = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v29, a3: 1);
  if ( result == 0 )
    return result;
  if ( v29 != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      v18 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      if ( *(_BYTE *)(a2 + 144) != 0 )
      {
        *(_QWORD *)a2 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        *(_QWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 24) = 0;
        *(_QWORD *)(a2 + 32) = 0;
        *(_QWORD *)(a2 + 40) = 0;
        *(_QWORD *)(a2 + 48) = 0;
        *(_QWORD *)(a2 + 56) = 0;
        *(_QWORD *)(a2 + 64) = 0;
        *(_QWORD *)(a2 + 72) = 0;
        *(_QWORD *)(a2 + 80) = 0;
        *(_BYTE *)(a2 + 88) = 0;
        sub_1400AB590(a1: a2 + 96, a2: &v19);
        sub_1400AB590(a1: a2 + 120, a2: (char *)&v20 + 8);
      }
      else
      {
        sub_1402BC850(a1: a2, a2: &v7);
        *(_BYTE *)(a2 + 144) = 1;
      }
      if ( *((_QWORD *)&v20 + 1) != 0 )
      {
        if ( (unsigned __int64)(4 * ((__int64)(*((_QWORD *)&v21 + 1) - *((_QWORD *)&v20 + 1)) >> 2)) < 0x1000 )
        {
          v5 = *((void **)&v20 + 1);
        }
        else
        {
          v5 = *(void **)(*((_QWORD *)&v20 + 1) - 8LL);
          if ( (unsigned __int64)(*((_QWORD *)&v20 + 1) - (_QWORD)v5 - 8LL) > 0x1F )
            goto LABEL_23;
        }
        sub_1409DB4C0(lpMem: v5);
      }
      if ( (_QWORD)v19 != 0 )
      {
        if ( (unsigned __int64)(4 * ((__int64)(v20 - v19) >> 2)) < 0x1000 )
        {
          v6 = (void *)v19;
        }
        else
        {
          v6 = *(void **)(v19 - 8);
          if ( (unsigned __int64)(v19 - (_QWORD)v6 - 8) > 0x1F )
            goto LABEL_23;
        }
        sub_1409DB4C0(lpMem: v6);
      }
    }
    if ( *(_BYTE *)(a2 + 144) != 0 )
    {
      v28 = a2;
      v7 = a2 + 120;
      v30 = a1;
      v8 = a2 + 96;
      v9 = a2 + 88;
      v10 = a2 + 84;
      v11 = a2 + 80;
      v12 = a2 + 76;
      v13 = a2 + 72;
      v14 = a2 + 68;
      v15 = a2 + 64;
      v16 = a2 + 60;
      v17 = a2 + 56;
      v18 = a2 + 52;
      *(_QWORD *)&v19 = a2 + 48;
      *((_QWORD *)&v19 + 1) = a2 + 44;
      *(_QWORD *)&v20 = a2 + 40;
      *((_QWORD *)&v20 + 1) = a2 + 36;
      *(_QWORD *)&v21 = a2 + 32;
      *((_QWORD *)&v21 + 1) = a2 + 28;
      v22 = a2 + 24;
      v23 = a2 + 20;
      v24 = a2 + 16;
      v25 = a2 + 12;
      v26 = a2 + 8;
      v27 = a2 + 4;
      return sub_1402BB410(a1: &v7, a2: &v30, a3: 0);
    }
LABEL_23:
    __fastfail(5u);
  }
  if ( *(_BYTE *)(a2 + 144) != 0 )
  {
    sub_1402BCEB0(a1: a2);
    *(_BYTE *)(a2 + 144) = 0;
  }
  return 1;
}