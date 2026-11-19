char __fastcall sub_14051AC20(_DWORD *a1, __int64 *a2)
{
  unsigned int v4; // r12d
  __int64 v5; // r9
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r8
  __int64 v9; // rbp
  __int64 i; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(); // rax
  __int64 v16; // rdx
  char v17; // al
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140FBD760) != 0 )
    __debugbreak();
  v19 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v19) != 0 )
  {
    v4 = v19;
    if ( v19 <= 0x3E80 )
    {
      v5 = *a2;
      v6 = a2[1];
      v7 = v19;
      v8 = (v6 - *a2) / 40;
      if ( v19 >= v8 )
      {
        if ( v19 > v8 )
        {
          if ( v19 <= (unsigned __int64)((a2[2] - v5) / 40) )
          {
            v11 = v19 - v8;
            if ( v19 != v8 )
            {
              do
              {
                *(_BYTE *)(v6 + 32) = 0;
                v6 += 40;
                --v11;
              }
              while ( v11 != 0 );
            }
            a2[1] = v6;
          }
          else
          {
            sub_14051D9A0(a1: a2, a2: v19, a3: &v19);
          }
        }
      }
      else
      {
        v9 = v5 + 40LL * v19;
        for ( i = v9; i != v6; i += 40 )
        {
          sub_1405276C0(a1: i);
          *(_BYTE *)(i + 32) = -1;
        }
        a2[1] = v9;
      }
      v12 = *a2;
      v13 = 0;
      if ( v4 == 0 )
        return 1;
      while ( 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
        {
          v14 = *(_QWORD *)a1;
          LOBYTE(v19) = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned int *, __int64))(v14 + 16))(a1, a2: &v19, a3: 1) == 0
            || (unsigned __int8)v19 >= 8u )
          {
            return 0;
          }
          if ( (unsigned __int8)v19 >= 8uLL )
            goto LABEL_30;
          v15 = funcs_14051ADF3[(unsigned __int8)v19];
          v16 = v12 + 40 * v13;
          if ( (char *)v15 == (char *)sub_14051BC40 )
            v17 = sub_14051BC40(a1, a2: v16);
          else
            v17 = ((__int64 (__fastcall *)(_DWORD *, __int64))v15)(a1, a2: v16);
        }
        else
        {
          LOBYTE(v19) = *(_BYTE *)(v12 + 40 * v13 + 32);
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned int *, __int64))(*(_QWORD *)a1 + 16LL))(
                 a1,
                 a2: &v19,
                 a3: 1) == 0 )
            return 0;
          if ( (unsigned __int8)v19 >= 8uLL )
LABEL_30:
            __fastfail(5u);
          v17 = ((__int64 (__fastcall *)(_DWORD *, __int64))funcs_14051AE1A[(unsigned __int8)v19])(
                  a1,
                  a2: v12 + 40 * v13);
        }
        if ( v17 == 0 )
          return 0;
        if ( ++v13 >= v7 )
          return 1;
      }
    }
  }
  return 0;
}