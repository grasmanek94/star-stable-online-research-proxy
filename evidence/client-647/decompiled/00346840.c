char __fastcall sub_140346840(_DWORD *a1, __int64 ***a2)
{
  char v4; // al
  __int64 **v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 **v8; // r13
  __int64 *v9; // rax
  __int64 **v10; // rcx
  __int64 *v11; // r15
  int v12; // edi
  __int64 v13; // rbx
  void *v15; // rcx
  __int64 *v16; // rbx
  _BYTE *v17; // rax
  __int64 *i; // rax
  int v19; // [rsp+20h] [rbp-69h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-65h] BYREF
  __int64 v21; // [rsp+28h] [rbp-61h]
  unsigned __int64 v22; // [rsp+30h] [rbp-59h]
  __int64 ***v23; // [rsp+38h] [rbp-51h]
  __int64 v24; // [rsp+40h] [rbp-49h]
  __int64 *v25; // [rsp+50h] [rbp-39h] BYREF
  int v26; // [rsp+58h] [rbp-31h]
  int v27; // [rsp+70h] [rbp-19h]
  __int128 v28; // [rsp+78h] [rbp-11h] BYREF
  __int64 v29; // [rsp+88h] [rbp-1h]
  unsigned __int64 v30; // [rsp+90h] [rbp+7h]
  _BYTE v31[8]; // [rsp+98h] [rbp+Fh] BYREF

  if ( (unsigned __int64)a2[1] > 0xFFFF )
    return 0;
  LOWORD(v19) = (unsigned __int16)a2[1];
  if ( sub_1402D2B10(a1, a2: &v19) == 0 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = *a2;
  if ( v4 != 0 )
  {
    v6 = (unsigned __int16)v19;
    sub_1403484E0(a1: a2, a2, a3: v5[1]);
    v5[1] = (__int64 *)v5;
    *v5 = (__int64 *)v5;
    v5[2] = (__int64 *)v5;
    a2[1] = nullptr;
    v7 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 15;
    LOBYTE(v28) = 0;
    v31[0] = 0;
    v21 = 0;
    v22 = v6;
    if ( (_WORD)v6 == 0 )
    {
LABEL_21:
      sub_14001B5A0(a1: &v28);
      return 1;
    }
    while ( 1 )
    {
      v20 = v7;
      if ( sub_1401D0820(a1, a2: &v20) == 0 )
        break;
      v19 = v27;
      if ( sub_1401D0820(a1, a2: &v19) == 0 )
        break;
      v27 = v19;
      if ( sub_1402B4D00(a1, a2: (__int64 *)&v28) == 0
        || (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v31, a3: 1) == 0 )
      {
        break;
      }
      v7 = v20;
      v8 = *a2;
      v9 = (*a2)[1];
      v10 = *a2;
      if ( *((_BYTE *)v9 + 25) != 0 )
      {
        v12 = 0;
        v11 = (*a2)[1];
      }
      else
      {
        do
        {
          v11 = v9;
          if ( *((_DWORD *)v9 + 8) >= v20 )
          {
            v12 = 1;
            v10 = (__int64 **)v9;
            v9 = (__int64 *)*v9;
          }
          else
          {
            v12 = 0;
            v9 = (__int64 *)v9[2];
          }
        }
        while ( *((_BYTE *)v9 + 25) == 0 );
      }
      if ( *((_BYTE *)v10 + 25) != 0 || v20 < *((_DWORD *)v10 + 8) )
      {
        if ( a2[1] == (__int64 **)0x2E8BA2E8BA2E8BALL )
          sub_14005A5D0();
        v23 = a2;
        v24 = 0;
        v13 = sub_1409DB470(a1: 88);
        v24 = v13;
        *(_DWORD *)(v13 + 32) = v7;
        *(_DWORD *)(v13 + 40) = v27;
        sub_140016F80(a1: v13 + 48, a2: &v28);
        *(_BYTE *)(v13 + 80) = v31[0];
        *(_QWORD *)v13 = v8;
        *(_QWORD *)(v13 + 8) = v8;
        *(_QWORD *)(v13 + 16) = v8;
        *(_WORD *)(v13 + 24) = 0;
        v24 = 0;
        v25 = v11;
        v26 = v12;
        sub_14005A200(a1: a2, a2: &v25, a3: v13);
      }
      if ( ++v21 >= v22 )
        goto LABEL_21;
    }
    if ( v30 > 0xF )
    {
      v15 = (void *)v28;
      if ( v30 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v28 - *(_QWORD *)(v28 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v15 = *(void **)(v28 - 8);
      }
      sub_1409DB4C0(lpMem: v15);
    }
    return 0;
  }
  v16 = *v5;
  if ( *((_BYTE *)*v5 + 25) == 0 )
  {
    while ( 1 )
    {
      v20 = *((_DWORD *)v16 + 8);
      if ( sub_1401D0820(a1, a2: &v20) == 0 )
        break;
      *((_DWORD *)v16 + 8) = v20;
      if ( (unsigned __int8)sub_140347680(a1, a2: v16 + 5) == 0 )
        break;
      v17 = (_BYTE *)v16[2];
      if ( v17[25] != 0 )
      {
        for ( i = (__int64 *)v16[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)i[1] )
        {
          if ( v16 != (__int64 *)i[2] )
            break;
          v16 = i;
        }
        v16 = i;
      }
      else
      {
        v16 = (__int64 *)v16[2];
        if ( *(_BYTE *)(*(_QWORD *)v17 + 25LL) == 0 )
        {
          do
            v16 = (__int64 *)*v16;
          while ( *(_BYTE *)(*v16 + 25) == 0 );
        }
      }
      if ( *((_BYTE *)v16 + 25) != 0 )
        return 1;
    }
    return 0;
  }
  return 1;
}