char __fastcall sub_1404FEC60(_DWORD *a1, int *a2)
{
  char v5; // [rsp+30h] [rbp+8h] BYREF
  __int16 v6; // [rsp+35h] [rbp+Dh]
  char v7; // [rsp+37h] [rbp+Fh]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v5 = *((_BYTE *)a2 + 4);
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v5, a3: 1) == 0 )
    return 0;
  if ( v5 == 0 )
  {
    *((_BYTE *)a2 + 4) = 0;
    return 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    *(_WORD *)((char *)a2 + 5) = v6;
    *((_BYTE *)a2 + 7) = v7;
    *a2 = 0;
    *((_BYTE *)a2 + 4) = 1;
  }
  if ( *((_BYTE *)a2 + 4) == 0 )
    __fastfail(5u);
  v8 = *a2;
  if ( sub_1401D0820(a1, a2: &v8) == 0 )
    return 0;
  *a2 = v8;
  return 1;
}