char __fastcall sub_140457330(__int64 a1, _DWORD *a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+24h] [rbp-14h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _BYTE v8[12]; // [rsp+2Ch] [rbp-Ch] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v8[0] = 0;
  if ( (unsigned __int8)sub_1402B8840(a1: a2, a2: v8) != 0 )
  {
    v9 = v7;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v9, a3: 1) != 0 )
    {
      if ( v9 == 0 )
      {
        v7 = 0;
LABEL_8:
        (*(void (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1: a1 + 16, a2: v8[0], a3: &v5);
        return 1;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) == 0 )
        __fastfail(5u);
      v6 = 0;
      v5 = -1;
      v7 = 1;
      v10 = -1;
      if ( sub_1401D0820(a1: a2, a2: &v10) != 0 )
      {
        v5 = v10;
        if ( (unsigned __int8)sub_1402D2DB0(a1: a2, a2: &v6) != 0 )
          goto LABEL_8;
      }
    }
  }
  return 0;
}