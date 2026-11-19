char __fastcall sub_140471900(__int64 a1, _DWORD *a2)
{
  int v5; // [rsp+20h] [rbp-10h] BYREF
  char v6; // [rsp+24h] [rbp-Ch]
  unsigned int v7; // [rsp+28h] [rbp-8h]
  unsigned int v8; // [rsp+2Ch] [rbp-4h]
  int v9; // [rsp+58h] [rbp+28h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF

  v6 = 0;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v9) != 0 )
  {
    v8 = v9;
    v9 = v7;
    if ( sub_1401D0820(a1: a2, a2: &v9) != 0 )
    {
      v7 = v9;
      LOBYTE(v9) = v6;
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v9, a3: 1) != 0 )
      {
        if ( (_BYTE)v9 == 0 )
        {
          v6 = 0;
LABEL_9:
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, int *))(a1 + 8))(a1: a1 + 16, a2: v8, a3: v7, a4: &v5);
          return 1;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) == 0 )
          __fastfail(5u);
        v5 = -1;
        v6 = 1;
        v10 = -1;
        if ( sub_1401D0820(a1: a2, a2: &v10) != 0 )
        {
          v5 = v10;
          goto LABEL_9;
        }
      }
    }
  }
  return 0;
}