char __fastcall sub_140A4BF80(_DWORD *a1, __int64 a2)
{
  char v5; // al
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  unsigned int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]
  int v11; // [rsp+38h] [rbp-10h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2);
    v6 = 16;
    if ( v5 == 0 )
      v6 = 20;
    v12 = *(_DWORD *)(v6 + a2);
    if ( sub_1401D0820(a1, a2: &v12) != 0 )
    {
      sub_140A25890((__int64)a1, a2: *(_QWORD *)(a2 + 8), a3: v12);
      return 1;
    }
    return 0;
  }
  v12 = 0;
  if ( sub_1401D0820(a1, a2: &v12) == 0 || a1[4] - a1[5] < v12 )
    return 0;
  sub_140A4BE90((__int64)a1, a2: (__int64)v7, a3: v12);
  sub_140A4BF60((__int64)a1, a2: v12);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    *(_QWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 16) = v9;
    *(_DWORD *)(a2 + 20) = v10;
    *(_DWORD *)(a2 + 24) = v11;
  }
  else
  {
    sub_140A25890(a1: a2, a2: v8, a3: v9);
  }
  return 1;
}